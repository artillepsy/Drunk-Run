using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

namespace Saves
{
    public static class SaveSystem
    {
        public static void SaveMetrics(Metrics data)
        {
            var binaryFormatter = new BinaryFormatter();
            var path = Application.persistentDataPath + "/Metrics.class";
            var fileStream = new FileStream(path, FileMode.Create);
            binaryFormatter.Serialize(fileStream, data);
            fileStream.Close();
        }

        public static Metrics Load()
        {
            var path = Application.persistentDataPath + "/Metrics.class";
            FileStream fileStream;
            try
            {
                fileStream = new FileStream(path, FileMode.Open);
            }
            catch (FileNotFoundException e)
            {
                Debug.Log("file doesn't exist");
                return null;
            }

            if (File.Exists(path) && fileStream.Length > 0)
            {
                var binaryFormatter = new BinaryFormatter();
                var data = binaryFormatter.Deserialize(fileStream) as Metrics;
                fileStream.Close();
                return data;
            }

            Debug.Log("file doesn't exist");
            return null;
        }
    }
}