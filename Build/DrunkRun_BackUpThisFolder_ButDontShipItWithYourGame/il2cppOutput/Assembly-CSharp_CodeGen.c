#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 IYandexAppMetrica AppMetrica::get_Instance()
extern void AppMetrica_get_Instance_m5EB615F21606FEDEF7F6B8B0319689ECC158B4C7 (void);
// 0x00000002 System.Void AppMetrica::Awake()
extern void AppMetrica_Awake_m5DBDA7E169B0B6D729898C98AD1CAC678E7B763C (void);
// 0x00000003 System.Void AppMetrica::Start()
extern void AppMetrica_Start_m4227B9206EF0DE1753E4A5687402C6E9DAF69EFF (void);
// 0x00000004 System.Void AppMetrica::OnEnable()
extern void AppMetrica_OnEnable_m55694E9FE00FF0D66D32C5EC5EF7A39DA0EF6319 (void);
// 0x00000005 System.Void AppMetrica::OnDisable()
extern void AppMetrica_OnDisable_m0FC036E0B92B985040D9E200EB36876216E561F2 (void);
// 0x00000006 System.Void AppMetrica::OnApplicationPause(System.Boolean)
extern void AppMetrica_OnApplicationPause_m6F8A17B737F2D9D3E3B1DC458B65B9A844635634 (void);
// 0x00000007 System.Void AppMetrica::SetupMetrica()
extern void AppMetrica_SetupMetrica_m501B61D5B792CCF44AA9E1CCB954BE9EF8742ACE (void);
// 0x00000008 System.Void AppMetrica::HandleLog(System.String,System.String,UnityEngine.LogType)
extern void AppMetrica_HandleLog_m5854426FF167D14B0A3E74EF494CC30CF78861AB (void);
// 0x00000009 System.Void AppMetrica::.ctor()
extern void AppMetrica__ctor_m5B7D252993797CB916179B095B80914B247365D6 (void);
// 0x0000000A System.Void AppMetrica::.cctor()
extern void AppMetrica__cctor_mD201631287959F894644DAAE68F3BF8D3B3DD324 (void);
// 0x0000000B System.Void BaseYandexAppMetrica::add_OnActivation(ConfigUpdateHandler)
extern void BaseYandexAppMetrica_add_OnActivation_mE925443792B17ACC016ABB93EF54098121976705 (void);
// 0x0000000C System.Void BaseYandexAppMetrica::remove_OnActivation(ConfigUpdateHandler)
extern void BaseYandexAppMetrica_remove_OnActivation_m6E0C02E4696C797132351E2B88299A04311D2C30 (void);
// 0x0000000D System.Nullable`1<YandexAppMetricaConfig> BaseYandexAppMetrica::get_ActivationConfig()
extern void BaseYandexAppMetrica_get_ActivationConfig_m6F9B498B12BBF9EF2879103B2BE60C1A36E33E7B (void);
// 0x0000000E System.Void BaseYandexAppMetrica::set_ActivationConfig(System.Nullable`1<YandexAppMetricaConfig>)
extern void BaseYandexAppMetrica_set_ActivationConfig_mA9EC61A5043E97D3389810FA1CC98C4D7D679396 (void);
// 0x0000000F System.Void BaseYandexAppMetrica::ActivateWithConfiguration(YandexAppMetricaConfig)
extern void BaseYandexAppMetrica_ActivateWithConfiguration_mB7480711FBEBF9C945C5C10826D23FE1F2BD5F46 (void);
// 0x00000010 System.Void BaseYandexAppMetrica::ResumeSession()
// 0x00000011 System.Void BaseYandexAppMetrica::PauseSession()
// 0x00000012 System.Void BaseYandexAppMetrica::ReportEvent(System.String)
// 0x00000013 System.Void BaseYandexAppMetrica::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// 0x00000014 System.Void BaseYandexAppMetrica::ReportEvent(System.String,System.String)
// 0x00000015 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String)
// 0x00000016 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String,System.String)
// 0x00000017 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String,System.Exception)
// 0x00000018 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
// 0x00000019 System.Void BaseYandexAppMetrica::ReportError(System.Exception,System.String)
// 0x0000001A System.Void BaseYandexAppMetrica::ReportError(YandexAppMetricaErrorDetails,System.String)
// 0x0000001B System.Void BaseYandexAppMetrica::ReportUnhandledException(System.Exception)
// 0x0000001C System.Void BaseYandexAppMetrica::ReportUnhandledException(YandexAppMetricaErrorDetails)
// 0x0000001D System.Void BaseYandexAppMetrica::ReportErrorFromLogCallback(System.String,System.String)
// 0x0000001E System.Void BaseYandexAppMetrica::SetLocationTracking(System.Boolean)
// 0x0000001F System.Void BaseYandexAppMetrica::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
// 0x00000020 System.String BaseYandexAppMetrica::get_LibraryVersion()
// 0x00000021 System.Int32 BaseYandexAppMetrica::get_LibraryApiLevel()
// 0x00000022 System.Void BaseYandexAppMetrica::SetUserProfileID(System.String)
// 0x00000023 System.Void BaseYandexAppMetrica::ReportUserProfile(YandexAppMetricaUserProfile)
// 0x00000024 System.Void BaseYandexAppMetrica::ReportRevenue(YandexAppMetricaRevenue)
// 0x00000025 System.Void BaseYandexAppMetrica::SetStatisticsSending(System.Boolean)
// 0x00000026 System.Void BaseYandexAppMetrica::SendEventsBuffer()
// 0x00000027 System.Void BaseYandexAppMetrica::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
// 0x00000028 System.Void BaseYandexAppMetrica::ReportReferralUrl(System.String)
// 0x00000029 System.Void BaseYandexAppMetrica::ReportAppOpen(System.String)
// 0x0000002A System.Void BaseYandexAppMetrica::PutErrorEnvironmentValue(System.String,System.String)
// 0x0000002B System.Void BaseYandexAppMetrica::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
// 0x0000002C System.Void BaseYandexAppMetrica::UpdateConfiguration(YandexAppMetricaConfig)
extern void BaseYandexAppMetrica_UpdateConfiguration_mC825E37FFAFD4B1FC173FC15760FD7D440515414 (void);
// 0x0000002D System.Void BaseYandexAppMetrica::.ctor()
extern void BaseYandexAppMetrica__ctor_mDEED10287F9551B410A31EE144B414B4546BC13B (void);
// 0x0000002E System.Void ConfigUpdateHandler::.ctor(System.Object,System.IntPtr)
extern void ConfigUpdateHandler__ctor_m36F90B4DDDAC65D9981C40C9D3F3A28BC05AD164 (void);
// 0x0000002F System.Void ConfigUpdateHandler::Invoke(YandexAppMetricaConfig)
extern void ConfigUpdateHandler_Invoke_m8E918DAFE7EE9507A2257200C4394D456449C4A3 (void);
// 0x00000030 System.IAsyncResult ConfigUpdateHandler::BeginInvoke(YandexAppMetricaConfig,System.AsyncCallback,System.Object)
extern void ConfigUpdateHandler_BeginInvoke_m5731E165F907F1F98380A9A985330CA059429F04 (void);
// 0x00000031 System.Void ConfigUpdateHandler::EndInvoke(System.IAsyncResult)
extern void ConfigUpdateHandler_EndInvoke_mF634D3F33A43E2A07E34785203CDE6945A4595E9 (void);
// 0x00000032 System.Nullable`1<YandexAppMetricaConfig> IYandexAppMetrica::get_ActivationConfig()
// 0x00000033 System.String IYandexAppMetrica::get_LibraryVersion()
// 0x00000034 System.Int32 IYandexAppMetrica::get_LibraryApiLevel()
// 0x00000035 System.Void IYandexAppMetrica::add_OnActivation(ConfigUpdateHandler)
// 0x00000036 System.Void IYandexAppMetrica::remove_OnActivation(ConfigUpdateHandler)
// 0x00000037 System.Void IYandexAppMetrica::ActivateWithConfiguration(YandexAppMetricaConfig)
// 0x00000038 System.Void IYandexAppMetrica::ResumeSession()
// 0x00000039 System.Void IYandexAppMetrica::PauseSession()
// 0x0000003A System.Void IYandexAppMetrica::ReportEvent(System.String)
// 0x0000003B System.Void IYandexAppMetrica::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// 0x0000003C System.Void IYandexAppMetrica::ReportEvent(System.String,System.String)
// 0x0000003D System.Void IYandexAppMetrica::ReportError(System.String,System.String)
// 0x0000003E System.Void IYandexAppMetrica::ReportError(System.String,System.String,System.String)
// 0x0000003F System.Void IYandexAppMetrica::ReportError(System.String,System.String,System.Exception)
// 0x00000040 System.Void IYandexAppMetrica::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
// 0x00000041 System.Void IYandexAppMetrica::ReportError(System.Exception,System.String)
// 0x00000042 System.Void IYandexAppMetrica::ReportError(YandexAppMetricaErrorDetails,System.String)
// 0x00000043 System.Void IYandexAppMetrica::ReportUnhandledException(System.Exception)
// 0x00000044 System.Void IYandexAppMetrica::ReportUnhandledException(YandexAppMetricaErrorDetails)
// 0x00000045 System.Void IYandexAppMetrica::ReportErrorFromLogCallback(System.String,System.String)
// 0x00000046 System.Void IYandexAppMetrica::SetLocationTracking(System.Boolean)
// 0x00000047 System.Void IYandexAppMetrica::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
// 0x00000048 System.Void IYandexAppMetrica::SetUserProfileID(System.String)
// 0x00000049 System.Void IYandexAppMetrica::ReportUserProfile(YandexAppMetricaUserProfile)
// 0x0000004A System.Void IYandexAppMetrica::ReportRevenue(YandexAppMetricaRevenue)
// 0x0000004B System.Void IYandexAppMetrica::SetStatisticsSending(System.Boolean)
// 0x0000004C System.Void IYandexAppMetrica::SendEventsBuffer()
// 0x0000004D System.Void IYandexAppMetrica::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
// 0x0000004E System.Void IYandexAppMetrica::ReportReferralUrl(System.String)
// 0x0000004F System.Void IYandexAppMetrica::ReportAppOpen(System.String)
// 0x00000050 System.Void IYandexAppMetrica::PutErrorEnvironmentValue(System.String,System.String)
// 0x00000051 System.Void IYandexAppMetrica::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
// 0x00000052 YandexAppMetricaBirthDateAttribute YandexAppMetricaAttribute::BirthDate()
extern void YandexAppMetricaAttribute_BirthDate_m940F5E6923E117B7B0619ABC5E0E4109E62C8E51 (void);
// 0x00000053 YandexAppMetricaGenderAttribute YandexAppMetricaAttribute::Gender()
extern void YandexAppMetricaAttribute_Gender_m9A02B789945EF58EC88AED208940D076EAAC51C1 (void);
// 0x00000054 YandexAppMetricaNameAttribute YandexAppMetricaAttribute::Name()
extern void YandexAppMetricaAttribute_Name_m4E1BA13C5E1C358925D9E07B4024F351E8DFAC7D (void);
// 0x00000055 YandexAppMetricaNotificationsEnabledAttribute YandexAppMetricaAttribute::NotificationsEnabled()
extern void YandexAppMetricaAttribute_NotificationsEnabled_mFA5914B046C47AD63C00B20937BA3B82646F963F (void);
// 0x00000056 YandexAppMetricaBooleanAttribute YandexAppMetricaAttribute::CustomBoolean(System.String)
extern void YandexAppMetricaAttribute_CustomBoolean_m368F70F1967804C347DAC4CDFD0E81A8510C9362 (void);
// 0x00000057 YandexAppMetricaCounterAttribute YandexAppMetricaAttribute::CustomCounter(System.String)
extern void YandexAppMetricaAttribute_CustomCounter_m37612DD78B1256655CA115432D15E11B6AA1E703 (void);
// 0x00000058 YandexAppMetricaNumberAttribute YandexAppMetricaAttribute::CustomNumber(System.String)
extern void YandexAppMetricaAttribute_CustomNumber_m6D7A7F27AD7470D6D0FFD701EF6F41D9288E278B (void);
// 0x00000059 YandexAppMetricaStringAttribute YandexAppMetricaAttribute::CustomString(System.String)
extern void YandexAppMetricaAttribute_CustomString_mB837A3A4C7645F167B21AD1944AA6D2831A39B42 (void);
// 0x0000005A System.Void YandexAppMetricaAttribute::.ctor()
extern void YandexAppMetricaAttribute__ctor_m5A647386010BF13E8F99674A8733B88D2F7B1D3F (void);
// 0x0000005B YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithAge(System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithAge_m0C771B731C3BCF41F88C0140FA1A2444DA8B0B10 (void);
// 0x0000005C YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.DateTime)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_m18FC24496982FC933F8670DCACEC52EA3B342A0E (void);
// 0x0000005D YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_mA11761F7AE84434D984A80D539961E5D06C0528B (void);
// 0x0000005E YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.Int32,System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_m29EBA21927093D5A65A5864855CE54AF5ADEB55C (void);
// 0x0000005F YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.Int32,System.Int32,System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_m30A5F955325E558A2940E2EFCB0388168BD33298 (void);
// 0x00000060 YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithValueReset()
extern void YandexAppMetricaBirthDateAttribute_WithValueReset_m730305211DC7E81A347C4308BCC8A6954DEC6C30 (void);
// 0x00000061 System.Void YandexAppMetricaBirthDateAttribute::.ctor()
extern void YandexAppMetricaBirthDateAttribute__ctor_m64060851390EC187EB959622802023492D1F8899 (void);
// 0x00000062 System.Void YandexAppMetricaBooleanAttribute::.ctor(System.String)
extern void YandexAppMetricaBooleanAttribute__ctor_m73B86BF16008315C5DBC5FFA155097BC901219BF (void);
// 0x00000063 YandexAppMetricaUserProfileUpdate YandexAppMetricaBooleanAttribute::WithValue(System.Boolean)
extern void YandexAppMetricaBooleanAttribute_WithValue_m72F14C9186D8839CAF9AE3D38470EA73B86D6FC0 (void);
// 0x00000064 YandexAppMetricaUserProfileUpdate YandexAppMetricaBooleanAttribute::WithValueIfUndefined(System.Boolean)
extern void YandexAppMetricaBooleanAttribute_WithValueIfUndefined_mB4BCF4671C23A53BC271733B98AE65FD561372A8 (void);
// 0x00000065 YandexAppMetricaUserProfileUpdate YandexAppMetricaBooleanAttribute::WithValueReset()
extern void YandexAppMetricaBooleanAttribute_WithValueReset_mF1ABFF5F4F5004E3C4C2CEB67B00DEF4A2C43C9E (void);
// 0x00000066 System.Void YandexAppMetricaCounterAttribute::.ctor(System.String)
extern void YandexAppMetricaCounterAttribute__ctor_mC95D8E05C76A8AF6480ED5B5F69A5904CF60906B (void);
// 0x00000067 YandexAppMetricaUserProfileUpdate YandexAppMetricaCounterAttribute::WithDelta(System.Double)
extern void YandexAppMetricaCounterAttribute_WithDelta_m7465A2743220C2C6888870B1A8CE90124BF7D184 (void);
// 0x00000068 YandexAppMetricaUserProfileUpdate YandexAppMetricaGenderAttribute::WithValue(YandexAppMetricaGenderAttribute/Gender)
extern void YandexAppMetricaGenderAttribute_WithValue_m434A83E78D313872AFF18311717CF227944C0BE7 (void);
// 0x00000069 YandexAppMetricaUserProfileUpdate YandexAppMetricaGenderAttribute::WithValueReset()
extern void YandexAppMetricaGenderAttribute_WithValueReset_mDD72761DC6F6409CAEE291176FED21FB58DD400A (void);
// 0x0000006A System.Void YandexAppMetricaGenderAttribute::.ctor()
extern void YandexAppMetricaGenderAttribute__ctor_mC519505AC6A85A3A8FE277508A2EC1565AB7E57A (void);
// 0x0000006B YandexAppMetricaUserProfileUpdate YandexAppMetricaNameAttribute::WithValue(System.String)
extern void YandexAppMetricaNameAttribute_WithValue_m0EEC5D1F557DAA8F3607C18AF41D9645C1A24FBE (void);
// 0x0000006C YandexAppMetricaUserProfileUpdate YandexAppMetricaNameAttribute::WithValueReset()
extern void YandexAppMetricaNameAttribute_WithValueReset_m2276032DEE0C6E2DABE7BAB7C604C26AFD3F6F40 (void);
// 0x0000006D System.Void YandexAppMetricaNameAttribute::.ctor()
extern void YandexAppMetricaNameAttribute__ctor_mCDAA237E85DA4E8147637C16817C296A6FF398E3 (void);
// 0x0000006E YandexAppMetricaUserProfileUpdate YandexAppMetricaNotificationsEnabledAttribute::WithValue(System.Boolean)
extern void YandexAppMetricaNotificationsEnabledAttribute_WithValue_m7A37CA6B9D0AFC753AC82E9C603DA554565AED45 (void);
// 0x0000006F YandexAppMetricaUserProfileUpdate YandexAppMetricaNotificationsEnabledAttribute::WithValueReset()
extern void YandexAppMetricaNotificationsEnabledAttribute_WithValueReset_mD91041866C6FA3D3CE43D0A4A5316E78269EF222 (void);
// 0x00000070 System.Void YandexAppMetricaNotificationsEnabledAttribute::.ctor()
extern void YandexAppMetricaNotificationsEnabledAttribute__ctor_mDB95771E3D9E6EDF5CD702313883C1D973676E22 (void);
// 0x00000071 System.Void YandexAppMetricaNumberAttribute::.ctor(System.String)
extern void YandexAppMetricaNumberAttribute__ctor_mEAA52D4E7DEC953C1B806078CB31EC5C2D3DFD9F (void);
// 0x00000072 YandexAppMetricaUserProfileUpdate YandexAppMetricaNumberAttribute::WithValue(System.Double)
extern void YandexAppMetricaNumberAttribute_WithValue_m6D6C31092CDA461FE6FE251860C8BD3BD0683D40 (void);
// 0x00000073 YandexAppMetricaUserProfileUpdate YandexAppMetricaNumberAttribute::WithValueIfUndefined(System.Double)
extern void YandexAppMetricaNumberAttribute_WithValueIfUndefined_mBB564239EF84EFA6306802982539E662B1A83116 (void);
// 0x00000074 YandexAppMetricaUserProfileUpdate YandexAppMetricaNumberAttribute::WithValueReset()
extern void YandexAppMetricaNumberAttribute_WithValueReset_m6AC56300891C43EEEA4A366DC2709F9BA3DAB480 (void);
// 0x00000075 System.Void YandexAppMetricaStringAttribute::.ctor(System.String)
extern void YandexAppMetricaStringAttribute__ctor_m54DE5D82EEFC0D4AC02FA1FC873524FFD4B1012A (void);
// 0x00000076 YandexAppMetricaUserProfileUpdate YandexAppMetricaStringAttribute::WithValue(System.String)
extern void YandexAppMetricaStringAttribute_WithValue_mAC56CBAA84C15FD0A5C1BEA6C00E6D647E8A9918 (void);
// 0x00000077 YandexAppMetricaUserProfileUpdate YandexAppMetricaStringAttribute::WithValueIfUndefined(System.String)
extern void YandexAppMetricaStringAttribute_WithValueIfUndefined_mB3BDEE8214F295C07D3D65764DCF35256AD78926 (void);
// 0x00000078 YandexAppMetricaUserProfileUpdate YandexAppMetricaStringAttribute::WithValueReset()
extern void YandexAppMetricaStringAttribute_WithValueReset_mD3A166BEBF470E1E27D7667BC67B424C9DFB00A4 (void);
// 0x00000079 System.Collections.Generic.List`1<YandexAppMetricaUserProfileUpdate> YandexAppMetricaUserProfile::GetUserProfileUpdates()
extern void YandexAppMetricaUserProfile_GetUserProfileUpdates_m6B1311B7ED6F7AC449420D786F59018EE85FB7BB (void);
// 0x0000007A YandexAppMetricaUserProfile YandexAppMetricaUserProfile::Apply(YandexAppMetricaUserProfileUpdate)
extern void YandexAppMetricaUserProfile_Apply_m27F43850CE1AC7E50A7E1748A420DBFE3274BAF2 (void);
// 0x0000007B YandexAppMetricaUserProfile YandexAppMetricaUserProfile::ApplyFromArray(System.Collections.Generic.List`1<YandexAppMetricaUserProfileUpdate>)
extern void YandexAppMetricaUserProfile_ApplyFromArray_m35A3EA902F9EC11F0B777494CFC18A152A65DE17 (void);
// 0x0000007C System.Void YandexAppMetricaUserProfile::.ctor()
extern void YandexAppMetricaUserProfile__ctor_m971F44583D1869C13C4B81E0026D94959B2AADF6 (void);
// 0x0000007D System.String YandexAppMetricaUserProfileUpdate::get_AttributeName()
extern void YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86 (void);
// 0x0000007E System.Void YandexAppMetricaUserProfileUpdate::set_AttributeName(System.String)
extern void YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1 (void);
// 0x0000007F System.String YandexAppMetricaUserProfileUpdate::get_MethodName()
extern void YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26 (void);
// 0x00000080 System.Void YandexAppMetricaUserProfileUpdate::set_MethodName(System.String)
extern void YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228 (void);
// 0x00000081 System.String YandexAppMetricaUserProfileUpdate::get_Key()
extern void YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D (void);
// 0x00000082 System.Void YandexAppMetricaUserProfileUpdate::set_Key(System.String)
extern void YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88 (void);
// 0x00000083 System.Object[] YandexAppMetricaUserProfileUpdate::get_Values()
extern void YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D (void);
// 0x00000084 System.Void YandexAppMetricaUserProfileUpdate::set_Values(System.Object[])
extern void YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2 (void);
// 0x00000085 System.Void YandexAppMetricaUserProfileUpdate::.ctor(System.String,System.String,System.String,System.Object[])
extern void YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2 (void);
// 0x00000086 System.String YandexAppMetricaAndroid::JsonStringFromDictionary(System.Collections.IEnumerable)
extern void YandexAppMetricaAndroid_JsonStringFromDictionary_m1BAEE09C16FEAF4362C0D63815421F1CDEB37947 (void);
// 0x00000087 UnityEngine.AndroidJavaObject YandexAppMetricaAndroid::ThrowableFromStringStackTrace(System.String)
extern void YandexAppMetricaAndroid_ThrowableFromStringStackTrace_m44D9A531BB4CD92D5E1C1E41FA51501EEFC20C89 (void);
// 0x00000088 System.Void YandexAppMetricaAndroid::CallAppMetrica(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Object[])
extern void YandexAppMetricaAndroid_CallAppMetrica_mD913E7708019833E2777050300BB404BBD427522 (void);
// 0x00000089 System.Void YandexAppMetricaAndroid::CallYandexMetricaPlugins(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Object[])
extern void YandexAppMetricaAndroid_CallYandexMetricaPlugins_m24B9CC0C69B66A2D253BE6E81C30065698198984 (void);
// 0x0000008A System.String YandexAppMetricaAndroid::GetSignatureFromTypeNames(System.Collections.Generic.IEnumerable`1<System.String>)
extern void YandexAppMetricaAndroid_GetSignatureFromTypeNames_mF47E65AFBEC86B20D622718EB5A5AA6FD890E984 (void);
// 0x0000008B System.Void YandexAppMetricaAndroid::ActivateWithConfiguration(YandexAppMetricaConfig)
extern void YandexAppMetricaAndroid_ActivateWithConfiguration_m9AEA491CD86A9B4CA4145C1DE369652DE7E354D9 (void);
// 0x0000008C System.Void YandexAppMetricaAndroid::ResumeSession()
extern void YandexAppMetricaAndroid_ResumeSession_mAAF5A13CDC981D10526F923D9489B48CD006B622 (void);
// 0x0000008D System.Void YandexAppMetricaAndroid::PauseSession()
extern void YandexAppMetricaAndroid_PauseSession_mE00FE65302C17999E82CF443C526400C14B14424 (void);
// 0x0000008E System.Void YandexAppMetricaAndroid::ReportEvent(System.String)
extern void YandexAppMetricaAndroid_ReportEvent_m9797C3E1C2A21B49F410B1443E07FF5A3815E05F (void);
// 0x0000008F System.Void YandexAppMetricaAndroid::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern void YandexAppMetricaAndroid_ReportEvent_m1287F782DC0B11449CC33276372B31A00D0433F0 (void);
// 0x00000090 System.Void YandexAppMetricaAndroid::ReportEvent(System.String,System.String)
extern void YandexAppMetricaAndroid_ReportEvent_m1AFDFB874F37EBFFDD5106D626D6C2B61AFC2751 (void);
// 0x00000091 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String)
extern void YandexAppMetricaAndroid_ReportError_mB0D97D230E3DBF1BEAAFEDC707F1B5F3CAD3CB01 (void);
// 0x00000092 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String,System.String)
extern void YandexAppMetricaAndroid_ReportError_m3781303E08712941BEE862946663B91505B5FAE6 (void);
// 0x00000093 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String,System.Exception)
extern void YandexAppMetricaAndroid_ReportError_mEE5AB04E1A4B9A38F2E28B1713FE9CFF3C68E86D (void);
// 0x00000094 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
extern void YandexAppMetricaAndroid_ReportError_m095A53099D7AA9D202ECE75313A82D8A062527A2 (void);
// 0x00000095 System.Void YandexAppMetricaAndroid::ReportError(System.Exception,System.String)
extern void YandexAppMetricaAndroid_ReportError_mF672932C825B13FF65FB1D3FB04F01581CD42AFA (void);
// 0x00000096 System.Void YandexAppMetricaAndroid::ReportError(YandexAppMetricaErrorDetails,System.String)
extern void YandexAppMetricaAndroid_ReportError_mF60163F2A17F931246748875120DE79BA24C6D31 (void);
// 0x00000097 System.Void YandexAppMetricaAndroid::ReportUnhandledException(System.Exception)
extern void YandexAppMetricaAndroid_ReportUnhandledException_m9C1FB8E7A3847049F4A9E9CCC61C76A1A30D3876 (void);
// 0x00000098 System.Void YandexAppMetricaAndroid::ReportUnhandledException(YandexAppMetricaErrorDetails)
extern void YandexAppMetricaAndroid_ReportUnhandledException_m1273DAD576FC6767076D96065F1FEBEBDC094F09 (void);
// 0x00000099 System.Void YandexAppMetricaAndroid::ReportErrorFromLogCallback(System.String,System.String)
extern void YandexAppMetricaAndroid_ReportErrorFromLogCallback_mE4BA429806CAEA059EBDB74D64C9D7180BE2F771 (void);
// 0x0000009A System.Void YandexAppMetricaAndroid::SetLocationTracking(System.Boolean)
extern void YandexAppMetricaAndroid_SetLocationTracking_m142BDF168D811AAF642F8E1AB9A492A14D249072 (void);
// 0x0000009B System.Void YandexAppMetricaAndroid::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
extern void YandexAppMetricaAndroid_SetLocation_m11DCA672B8CA0D9F7F7E9225B80D3D4300E821B3 (void);
// 0x0000009C System.Int32 YandexAppMetricaAndroid::get_LibraryApiLevel()
extern void YandexAppMetricaAndroid_get_LibraryApiLevel_m3DC68E5156B90D2979A3D5A177E9C051A0F721E2 (void);
// 0x0000009D System.String YandexAppMetricaAndroid::get_LibraryVersion()
extern void YandexAppMetricaAndroid_get_LibraryVersion_m6A08313064BD693C76582476435C6B2D459E6CF8 (void);
// 0x0000009E System.Void YandexAppMetricaAndroid::SetUserProfileID(System.String)
extern void YandexAppMetricaAndroid_SetUserProfileID_m8EB1151D563089E8C70DDB20C7941015618A5429 (void);
// 0x0000009F System.Void YandexAppMetricaAndroid::ReportUserProfile(YandexAppMetricaUserProfile)
extern void YandexAppMetricaAndroid_ReportUserProfile_mB6C896883793D47847AB4C2595A61F91AEA796B3 (void);
// 0x000000A0 System.Void YandexAppMetricaAndroid::ReportRevenue(YandexAppMetricaRevenue)
extern void YandexAppMetricaAndroid_ReportRevenue_m3F2050BCB8C2A37CBEC0BE04F8E83B8F3A43FAFE (void);
// 0x000000A1 System.Void YandexAppMetricaAndroid::SetStatisticsSending(System.Boolean)
extern void YandexAppMetricaAndroid_SetStatisticsSending_m14D5A28D885173FB6019D35C09FB61656F00EC0A (void);
// 0x000000A2 System.Void YandexAppMetricaAndroid::SendEventsBuffer()
extern void YandexAppMetricaAndroid_SendEventsBuffer_mBFD658286BE42404E656C82A4760E0E9EC6CE5E3 (void);
// 0x000000A3 System.Void YandexAppMetricaAndroid::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
extern void YandexAppMetricaAndroid_RequestAppMetricaDeviceID_m5951B8047BD1271B6D5D7BDBFA067199F53A4464 (void);
// 0x000000A4 System.Void YandexAppMetricaAndroid::ReportAppOpen(System.String)
extern void YandexAppMetricaAndroid_ReportAppOpen_mCD5DE2F1DAD7F850E55AA905E79BB8F13ABE3D76 (void);
// 0x000000A5 System.Void YandexAppMetricaAndroid::PutErrorEnvironmentValue(System.String,System.String)
extern void YandexAppMetricaAndroid_PutErrorEnvironmentValue_m87FDE9268C9B7E4AC5D6AE5DF9F3361261C9706E (void);
// 0x000000A6 System.Void YandexAppMetricaAndroid::ReportReferralUrl(System.String)
extern void YandexAppMetricaAndroid_ReportReferralUrl_m45A02B7D78DF39B2D5546E7F5004D29131EC5933 (void);
// 0x000000A7 System.Void YandexAppMetricaAndroid::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
extern void YandexAppMetricaAndroid_RequestTrackingAuthorization_m4DE6E1B07342047AB83043C395DC7AEFA02E5DC9 (void);
// 0x000000A8 System.Void YandexAppMetricaAndroid::.ctor()
extern void YandexAppMetricaAndroid__ctor_m6E35197AA7DDF34EBFFDE31152DA85F49EBC423A (void);
// 0x000000A9 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidAppMetricaConfig(YandexAppMetricaConfig)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidAppMetricaConfig_m9DF6D16C32D02F87C98F239B2B32CDD5DE2FDA9B (void);
// 0x000000AA UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidLocation(YandexAppMetricaConfig/Coordinates)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidLocation_mCF5F8D02166476102C2A28482E7E475E6768886F (void);
// 0x000000AB UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidGender(System.String)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidGender_mE28D497019D78EB181718108B6F950C3580DAA6D (void);
// 0x000000AC UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidUserProfileUpdate(YandexAppMetricaUserProfileUpdate)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidUserProfileUpdate_mC54DA883F54492F5C7F8FBD4321DE05D1AEEBFA1 (void);
// 0x000000AD UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidUserProfile(YandexAppMetricaUserProfile)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidUserProfile_mDAB1493464850EFA792A233E9AEEF2A6C90880FB (void);
// 0x000000AE UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidReceipt(System.Nullable`1<YandexAppMetricaReceipt>)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidReceipt_m6C775712DEEBD152BD56185F5704857586135B6E (void);
// 0x000000AF UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidInteger(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidInteger_mF2DAC7691F76C1D8950115553CC5BD4042827BE9 (void);
// 0x000000B0 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidCurrency(System.String)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidCurrency_m896BE4ABCE77819573CDFD25AF7752274626C23A (void);
// 0x000000B1 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidRevenue(YandexAppMetricaRevenue)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidRevenue_m1A5AD7464479D8A2361B5F9FC556E975D71ED5AB (void);
// 0x000000B2 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidThrowable(System.Exception)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidThrowable_mF8C810A444E3F8B7108B4873EFEBFDAB4C272678 (void);
// 0x000000B3 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidPluginErrorDetails(YandexAppMetricaErrorDetails)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidPluginErrorDetails_mDEFDB3F133007ED189420F03F061018FC81D534A (void);
// 0x000000B4 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidStackTraceItem(YandexAppMetricaStackTraceItem)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidStackTraceItem_mEC77A6DE004E86A7D47F19F0CD747A3E51036E4E (void);
// 0x000000B5 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::CreateAndroidList()
extern void YandexAppMetricaExtensionsAndroid_CreateAndroidList_m056F1E4A1DFBDA6FC387E2481AACD721C70978B4 (void);
// 0x000000B6 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidMap_mABCA71874FD8EB99EE6F0E76818CCB7CE80FAC59 (void);
// 0x000000B7 System.Void YandexAppMetricaDeviceIDListenerAndroid::.ctor(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
extern void YandexAppMetricaDeviceIDListenerAndroid__ctor_mB7982DD2FF721ED8BC6B3195C923D89DAA9AFC19 (void);
// 0x000000B8 System.Void YandexAppMetricaDeviceIDListenerAndroid::onLoaded(System.String)
extern void YandexAppMetricaDeviceIDListenerAndroid_onLoaded_m8922BDD2CF98A40096C874C9025FA1F605932D65 (void);
// 0x000000B9 System.Void YandexAppMetricaDeviceIDListenerAndroid::onError(UnityEngine.AndroidJavaObject)
extern void YandexAppMetricaDeviceIDListenerAndroid_onError_m87AF86A8C39A39F137CD6C43429EE356A514E391 (void);
// 0x000000BA System.Nullable`1<YandexAppMetricaRequestDeviceIDError> YandexAppMetricaDeviceIDListenerAndroid::ErrorFromAndroidReason(UnityEngine.AndroidJavaObject)
extern void YandexAppMetricaDeviceIDListenerAndroid_ErrorFromAndroidReason_m5448D291C732C6533962EC4355C9E9D73109ADF2 (void);
// 0x000000BB System.Void YandexAppMetricaConfig::.ctor(System.String)
extern void YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872 (void);
// 0x000000BC System.String YandexAppMetricaConfig::get_ApiKey()
extern void YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10 (void);
// 0x000000BD System.Void YandexAppMetricaConfig::set_ApiKey(System.String)
extern void YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB (void);
// 0x000000BE System.String YandexAppMetricaConfig::get_AppVersion()
extern void YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91 (void);
// 0x000000BF System.Void YandexAppMetricaConfig::set_AppVersion(System.String)
extern void YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA (void);
// 0x000000C0 System.Nullable`1<YandexAppMetricaConfig/Coordinates> YandexAppMetricaConfig::get_Location()
extern void YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806 (void);
// 0x000000C1 System.Void YandexAppMetricaConfig::set_Location(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
extern void YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B (void);
// 0x000000C2 System.Nullable`1<System.Int32> YandexAppMetricaConfig::get_SessionTimeout()
extern void YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5 (void);
// 0x000000C3 System.Void YandexAppMetricaConfig::set_SessionTimeout(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204 (void);
// 0x000000C4 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_CrashReporting()
extern void YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97 (void);
// 0x000000C5 System.Void YandexAppMetricaConfig::set_CrashReporting(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03 (void);
// 0x000000C6 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_LocationTracking()
extern void YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7 (void);
// 0x000000C7 System.Void YandexAppMetricaConfig::set_LocationTracking(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92 (void);
// 0x000000C8 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_Logs()
extern void YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B (void);
// 0x000000C9 System.Void YandexAppMetricaConfig::set_Logs(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE (void);
// 0x000000CA System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_HandleFirstActivationAsUpdate()
extern void YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5 (void);
// 0x000000CB System.Void YandexAppMetricaConfig::set_HandleFirstActivationAsUpdate(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1 (void);
// 0x000000CC System.Nullable`1<YandexAppMetricaPreloadInfo> YandexAppMetricaConfig::get_PreloadInfo()
extern void YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4 (void);
// 0x000000CD System.Void YandexAppMetricaConfig::set_PreloadInfo(System.Nullable`1<YandexAppMetricaPreloadInfo>)
extern void YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70 (void);
// 0x000000CE System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_StatisticsSending()
extern void YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840 (void);
// 0x000000CF System.Void YandexAppMetricaConfig::set_StatisticsSending(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B (void);
// 0x000000D0 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_AppForKids()
extern void YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72 (void);
// 0x000000D1 System.Void YandexAppMetricaConfig::set_AppForKids(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA (void);
// 0x000000D2 System.String YandexAppMetricaConfig::get_UserProfileID()
extern void YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235 (void);
// 0x000000D3 System.Void YandexAppMetricaConfig::set_UserProfileID(System.String)
extern void YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1 (void);
// 0x000000D4 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_RevenueAutoTrackingEnabled()
extern void YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E (void);
// 0x000000D5 System.Void YandexAppMetricaConfig::set_RevenueAutoTrackingEnabled(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC (void);
// 0x000000D6 System.Double YandexAppMetricaConfig/Coordinates::get_Latitude()
extern void Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA (void);
// 0x000000D7 System.Void YandexAppMetricaConfig/Coordinates::set_Latitude(System.Double)
extern void Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958 (void);
// 0x000000D8 System.Double YandexAppMetricaConfig/Coordinates::get_Longitude()
extern void Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403 (void);
// 0x000000D9 System.Void YandexAppMetricaConfig/Coordinates::set_Longitude(System.Double)
extern void Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17 (void);
// 0x000000DA System.Void YandexAppMetricaPreloadInfo::.ctor(System.String)
extern void YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82 (void);
// 0x000000DB System.String YandexAppMetricaPreloadInfo::get_TrackingId()
extern void YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716 (void);
// 0x000000DC System.Void YandexAppMetricaPreloadInfo::set_TrackingId(System.String)
extern void YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189 (void);
// 0x000000DD System.Collections.Generic.Dictionary`2<System.String,System.String> YandexAppMetricaPreloadInfo::get_AdditionalInfo()
extern void YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53 (void);
// 0x000000DE System.Void YandexAppMetricaPreloadInfo::set_AdditionalInfo(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF (void);
// 0x000000DF System.Void YandexAppMetricaDummy::ActivateWithConfiguration(YandexAppMetricaConfig)
extern void YandexAppMetricaDummy_ActivateWithConfiguration_mF4F7CC100A9A71036C5175990933BED3FC3C7DE9 (void);
// 0x000000E0 System.Void YandexAppMetricaDummy::ResumeSession()
extern void YandexAppMetricaDummy_ResumeSession_m72F87852E83F0D32515843217EA98B1AE71325E3 (void);
// 0x000000E1 System.Void YandexAppMetricaDummy::PauseSession()
extern void YandexAppMetricaDummy_PauseSession_mDEA63747851A33E5BFCA94AD684E2374C0AA749B (void);
// 0x000000E2 System.Void YandexAppMetricaDummy::ReportEvent(System.String)
extern void YandexAppMetricaDummy_ReportEvent_mCA8B31A5B8CBC43AC22AB03BFDB490028EDE4F4D (void);
// 0x000000E3 System.Void YandexAppMetricaDummy::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern void YandexAppMetricaDummy_ReportEvent_mDA835B54FC220CF4E89CF7EC8A19CEAF704C9598 (void);
// 0x000000E4 System.Void YandexAppMetricaDummy::ReportEvent(System.String,System.String)
extern void YandexAppMetricaDummy_ReportEvent_mF711B6E76C3B5180BBDE1B8DC2112C24822FA80A (void);
// 0x000000E5 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String)
extern void YandexAppMetricaDummy_ReportError_mCCC548F07ECA29B5DF2447A0B5F1FFC6EF778FCF (void);
// 0x000000E6 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String,System.String)
extern void YandexAppMetricaDummy_ReportError_m7E5E5A7C0C7A42955CB3E78877FB453CE91A5DA6 (void);
// 0x000000E7 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String,System.Exception)
extern void YandexAppMetricaDummy_ReportError_mDD789B98A0A324F9EF93007C7F2B60D8A85FC3C3 (void);
// 0x000000E8 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
extern void YandexAppMetricaDummy_ReportError_mD953AF2688D519B5E6A280DE3F0F450D57FDCCBB (void);
// 0x000000E9 System.Void YandexAppMetricaDummy::ReportError(System.Exception,System.String)
extern void YandexAppMetricaDummy_ReportError_mFBE5566FE561774058E6028007601FC3B3848751 (void);
// 0x000000EA System.Void YandexAppMetricaDummy::ReportError(YandexAppMetricaErrorDetails,System.String)
extern void YandexAppMetricaDummy_ReportError_mE39364CA4228864DA5D5AB2A5F8EDED17AFE2BC2 (void);
// 0x000000EB System.Void YandexAppMetricaDummy::ReportUnhandledException(System.Exception)
extern void YandexAppMetricaDummy_ReportUnhandledException_m98BB8774BE34AA58294C54DEB95D7757B9700F4C (void);
// 0x000000EC System.Void YandexAppMetricaDummy::ReportUnhandledException(YandexAppMetricaErrorDetails)
extern void YandexAppMetricaDummy_ReportUnhandledException_mE053E77DD1A74C53ABA5F97D1447842F714F23EF (void);
// 0x000000ED System.Void YandexAppMetricaDummy::ReportErrorFromLogCallback(System.String,System.String)
extern void YandexAppMetricaDummy_ReportErrorFromLogCallback_m992701136648DE7C9EDCB05540992A1D31B28E59 (void);
// 0x000000EE System.Void YandexAppMetricaDummy::SetLocationTracking(System.Boolean)
extern void YandexAppMetricaDummy_SetLocationTracking_mCFC5612CCF2909614A2F44EE26E24606F9BEB2D7 (void);
// 0x000000EF System.Void YandexAppMetricaDummy::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
extern void YandexAppMetricaDummy_SetLocation_mC38E20F136E85FA1AF45C01BB5C642FBD86C1700 (void);
// 0x000000F0 System.String YandexAppMetricaDummy::get_LibraryVersion()
extern void YandexAppMetricaDummy_get_LibraryVersion_m4E1A5FD6CC5F96FB24AC48124C0848A967BD2AA7 (void);
// 0x000000F1 System.Int32 YandexAppMetricaDummy::get_LibraryApiLevel()
extern void YandexAppMetricaDummy_get_LibraryApiLevel_m4A6FB5B8BA2CEECAFF51B6DC06C48E133C4178EA (void);
// 0x000000F2 System.Void YandexAppMetricaDummy::SetUserProfileID(System.String)
extern void YandexAppMetricaDummy_SetUserProfileID_m3D59E7EFDDD4A71048BD5902112954E7B914D605 (void);
// 0x000000F3 System.Void YandexAppMetricaDummy::ReportUserProfile(YandexAppMetricaUserProfile)
extern void YandexAppMetricaDummy_ReportUserProfile_m316552F557D1B4BF567CDBD0CCE01AA3D4C1D7CF (void);
// 0x000000F4 System.Void YandexAppMetricaDummy::ReportRevenue(YandexAppMetricaRevenue)
extern void YandexAppMetricaDummy_ReportRevenue_m07485ACACECC025BC7FD6BD465F727B9DA478751 (void);
// 0x000000F5 System.Void YandexAppMetricaDummy::SetStatisticsSending(System.Boolean)
extern void YandexAppMetricaDummy_SetStatisticsSending_m60E36412BACECF9C3F40B280020E1D94408F3A63 (void);
// 0x000000F6 System.Void YandexAppMetricaDummy::SendEventsBuffer()
extern void YandexAppMetricaDummy_SendEventsBuffer_m5514DFD644305C5200F7D65D18B3BB76E269B561 (void);
// 0x000000F7 System.Void YandexAppMetricaDummy::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
extern void YandexAppMetricaDummy_RequestAppMetricaDeviceID_m2344C2B031A16C7FD29E407FD0A80533EC511679 (void);
// 0x000000F8 System.Void YandexAppMetricaDummy::ReportReferralUrl(System.String)
extern void YandexAppMetricaDummy_ReportReferralUrl_m09C52CAA1D416B69F5D920459C0DEF404DF09C14 (void);
// 0x000000F9 System.Void YandexAppMetricaDummy::ReportAppOpen(System.String)
extern void YandexAppMetricaDummy_ReportAppOpen_m9E3E355BEF1253529AA19140BC0E6E5F40952803 (void);
// 0x000000FA System.Void YandexAppMetricaDummy::PutErrorEnvironmentValue(System.String,System.String)
extern void YandexAppMetricaDummy_PutErrorEnvironmentValue_m3FB76C8DBCB3D82A639ED26FF8F4836BE5A67CBE (void);
// 0x000000FB System.Void YandexAppMetricaDummy::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
extern void YandexAppMetricaDummy_RequestTrackingAuthorization_m1D797B70AA028DF598C6DEF7B53A106AC7677020 (void);
// 0x000000FC System.Void YandexAppMetricaDummy::.ctor()
extern void YandexAppMetricaDummy__ctor_mC7268479DA37B337858AD22EA14162B5C818D659 (void);
// 0x000000FD System.Void YandexAppMetricaErrorDetails::.ctor()
extern void YandexAppMetricaErrorDetails__ctor_mDC1BDC8F6C13C61669071D7A2CB1D6C5E22124F9 (void);
// 0x000000FE System.String YandexAppMetricaErrorDetails::get_ExceptionClass()
extern void YandexAppMetricaErrorDetails_get_ExceptionClass_m21DC3005EF21B07F36177D88714C3F834635FD49 (void);
// 0x000000FF System.Void YandexAppMetricaErrorDetails::set_ExceptionClass(System.String)
extern void YandexAppMetricaErrorDetails_set_ExceptionClass_m43DA4DA19847759D91C7C0F0B08938E28E99E7AE (void);
// 0x00000100 System.String YandexAppMetricaErrorDetails::get_Message()
extern void YandexAppMetricaErrorDetails_get_Message_m8D9BA1F2AD14F6A68451AF64A1BBEF59F3937E36 (void);
// 0x00000101 System.Void YandexAppMetricaErrorDetails::set_Message(System.String)
extern void YandexAppMetricaErrorDetails_set_Message_m5EADD2ADCE9BAD1EB51AC354BD0FB0EE251071C1 (void);
// 0x00000102 System.Collections.Generic.List`1<YandexAppMetricaStackTraceItem> YandexAppMetricaErrorDetails::get_Stacktrace()
extern void YandexAppMetricaErrorDetails_get_Stacktrace_m6053DC39D10D57107770C63CBF41D9ED4003E1E7 (void);
// 0x00000103 System.Void YandexAppMetricaErrorDetails::set_Stacktrace(System.Collections.Generic.List`1<YandexAppMetricaStackTraceItem>)
extern void YandexAppMetricaErrorDetails_set_Stacktrace_m121E0C5106B60574D0B1AC23A2AFCD034498B12E (void);
// 0x00000104 System.String YandexAppMetricaErrorDetails::get_Platform()
extern void YandexAppMetricaErrorDetails_get_Platform_mC1251AA6A3D9F6E18828550A8C2AC51264789118 (void);
// 0x00000105 System.Void YandexAppMetricaErrorDetails::set_Platform(System.String)
extern void YandexAppMetricaErrorDetails_set_Platform_mE15421EEA72CFAE27918BD083737059E323BF88A (void);
// 0x00000106 System.String YandexAppMetricaErrorDetails::get_VirtualMachineVersion()
extern void YandexAppMetricaErrorDetails_get_VirtualMachineVersion_m70CF8DB1717C47198846BD36CA97E56CE503DB35 (void);
// 0x00000107 System.Void YandexAppMetricaErrorDetails::set_VirtualMachineVersion(System.String)
extern void YandexAppMetricaErrorDetails_set_VirtualMachineVersion_m1CD5CBC716E07F52FB0E8289B39FDDFBF5F90BF3 (void);
// 0x00000108 System.Collections.Generic.Dictionary`2<System.String,System.String> YandexAppMetricaErrorDetails::get_PluginEnvironment()
extern void YandexAppMetricaErrorDetails_get_PluginEnvironment_mE2FD13854E760DF9DDB80D768404081F6B2AB8AD (void);
// 0x00000109 System.Void YandexAppMetricaErrorDetails::set_PluginEnvironment(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void YandexAppMetricaErrorDetails_set_PluginEnvironment_m583755CBD506FDBFB6A901EE7AFDBE7E557557BC (void);
// 0x0000010A YandexAppMetricaErrorDetails YandexAppMetricaErrorDetails::From(System.Exception)
extern void YandexAppMetricaErrorDetails_From_m7513633DB0F4A8FBFCF6D5E94D8B7ED0BFCD635B (void);
// 0x0000010B YandexAppMetricaErrorDetails YandexAppMetricaErrorDetails::FromLogCallback(System.String,System.String)
extern void YandexAppMetricaErrorDetails_FromLogCallback_mB1749516E2F0DA59E187B6B0C43853D2963DAB39 (void);
// 0x0000010C System.String YandexAppMetricaErrorDetails::ToString()
extern void YandexAppMetricaErrorDetails_ToString_m61FC75211E80DADF84A409E5091B0B0CFB7660C3 (void);
// 0x0000010D System.Void YandexAppMetricaErrorDetails/<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_m5D173CCCEFE38B9A3C3E4CA94B263AD38ECDFD3F (void);
// 0x0000010E System.Boolean YandexAppMetricaErrorDetails/<>c__DisplayClass25_0::<From>b__1(System.String)
extern void U3CU3Ec__DisplayClass25_0_U3CFromU3Eb__1_m6C69953E15BD0EE9CCD211E75ACD5B84F6402F9E (void);
// 0x0000010F System.Void YandexAppMetricaErrorDetails/<>c::.cctor()
extern void U3CU3Ec__cctor_mA3593E29485D3D54990E20088F75DB5978C93758 (void);
// 0x00000110 System.Void YandexAppMetricaErrorDetails/<>c::.ctor()
extern void U3CU3Ec__ctor_m4F1071D6BB570BA1C8D3D8FF5F1782A16C64C6A6 (void);
// 0x00000111 System.Boolean YandexAppMetricaErrorDetails/<>c::<From>b__25_0(System.String)
extern void U3CU3Ec_U3CFromU3Eb__25_0_m4A98D783011D4559824B2DE3C1EE2F839005478F (void);
// 0x00000112 System.Boolean YandexAppMetricaErrorDetails/<>c::<FromLogCallback>b__26_0(System.String)
extern void U3CU3Ec_U3CFromLogCallbackU3Eb__26_0_m80C4B2CB4577B171EAEF10186F2856AA2E36F8DB (void);
// 0x00000113 System.String YandexAppMetricaErrorDetails/<>c::<ToString>b__27_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern void U3CU3Ec_U3CToStringU3Eb__27_0_m70B14C191081D073C3F3F91A979D3174532F51FC (void);
// 0x00000114 System.String YandexAppMetricaErrorDetails/<>c::<ToString>b__27_1(YandexAppMetricaStackTraceItem)
extern void U3CU3Ec_U3CToStringU3Eb__27_1_m0F731ADDED441A0DD43EA31459EC7C7A6B717F3C (void);
// 0x00000115 System.Void YandexAppMetricaErrorDetails/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_mE758F5A3E79B0CBE4788BAE6FA18BB4C6955E9BA (void);
// 0x00000116 System.Boolean YandexAppMetricaErrorDetails/<>c__DisplayClass26_0::<FromLogCallback>b__1(System.String)
extern void U3CU3Ec__DisplayClass26_0_U3CFromLogCallbackU3Eb__1_m9A2F371A5DE63C2D4F027EAB5A57D30C6A624B3A (void);
// 0x00000117 System.String YandexAppMetricaStackTraceItem::get_ClassName()
extern void YandexAppMetricaStackTraceItem_get_ClassName_m946663DBAD4CCC5FE1A293E80FF8E61ABF724E75 (void);
// 0x00000118 System.Void YandexAppMetricaStackTraceItem::set_ClassName(System.String)
extern void YandexAppMetricaStackTraceItem_set_ClassName_m5EEFA29DD15CCDF567A85633826BB7BB8700AFD5 (void);
// 0x00000119 System.String YandexAppMetricaStackTraceItem::get_MethodName()
extern void YandexAppMetricaStackTraceItem_get_MethodName_m3637BAADC88285596D4096E4A1531DA6F95A7D8F (void);
// 0x0000011A System.Void YandexAppMetricaStackTraceItem::set_MethodName(System.String)
extern void YandexAppMetricaStackTraceItem_set_MethodName_m2732C8389BCAEC8B89AECE4CAA08D1C132819802 (void);
// 0x0000011B System.String YandexAppMetricaStackTraceItem::get_FileName()
extern void YandexAppMetricaStackTraceItem_get_FileName_mB00A61B97A6F105194D0EAE3B54F77B525D1F357 (void);
// 0x0000011C System.Void YandexAppMetricaStackTraceItem::set_FileName(System.String)
extern void YandexAppMetricaStackTraceItem_set_FileName_m8EDA02A46D4A4377951B83FC67B4F530F2B56B0D (void);
// 0x0000011D System.Nullable`1<System.Int32> YandexAppMetricaStackTraceItem::get_Line()
extern void YandexAppMetricaStackTraceItem_get_Line_m47028D86A4C6E6D6FB5148963F56EBDBAB202F0A (void);
// 0x0000011E System.Void YandexAppMetricaStackTraceItem::set_Line(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaStackTraceItem_set_Line_m13C5C828B1682CFC01DD90113E3675CFE72CCE9A (void);
// 0x0000011F System.Nullable`1<System.Int32> YandexAppMetricaStackTraceItem::get_Column()
extern void YandexAppMetricaStackTraceItem_get_Column_m4D1E2CE061688D6A779D61E0DAD3F66AE19D5332 (void);
// 0x00000120 System.Void YandexAppMetricaStackTraceItem::set_Column(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaStackTraceItem_set_Column_m9CD343280DB2716828D408477995C6C0703AD434 (void);
// 0x00000121 YandexAppMetricaStackTraceItem YandexAppMetricaStackTraceItem::From(System.String)
extern void YandexAppMetricaStackTraceItem_From_m04570D149AB6E01023505E8721700A80C8F382D1 (void);
// 0x00000122 System.String YandexAppMetricaStackTraceItem::GetGroupValueOrNull(System.Text.RegularExpressions.Match,System.String)
extern void YandexAppMetricaStackTraceItem_GetGroupValueOrNull_m275A1EE217D7761E879FEC23B897716B19B8975F (void);
// 0x00000123 System.String YandexAppMetricaStackTraceItem::ToString()
extern void YandexAppMetricaStackTraceItem_ToString_mF25A7B5729E735081DD38B31D6591AC416C082BC (void);
// 0x00000124 System.Void YandexAppMetricaStackTraceItem::.ctor()
extern void YandexAppMetricaStackTraceItem__ctor_m1DDB7BEC07800298D9567042D1023B28CA59C293 (void);
// 0x00000125 System.Void YandexAppMetricaRevenue::.ctor(System.Double,System.String)
extern void YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA (void);
// 0x00000126 System.Void YandexAppMetricaRevenue::.ctor(System.Decimal,System.String)
extern void YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0 (void);
// 0x00000127 System.Nullable`1<System.Double> YandexAppMetricaRevenue::get_Price()
extern void YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030 (void);
// 0x00000128 System.Void YandexAppMetricaRevenue::set_Price(System.Nullable`1<System.Double>)
extern void YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4 (void);
// 0x00000129 System.Nullable`1<System.Decimal> YandexAppMetricaRevenue::get_PriceDecimal()
extern void YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED (void);
// 0x0000012A System.Void YandexAppMetricaRevenue::set_PriceDecimal(System.Nullable`1<System.Decimal>)
extern void YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351 (void);
// 0x0000012B System.String YandexAppMetricaRevenue::get_Currency()
extern void YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA (void);
// 0x0000012C System.Void YandexAppMetricaRevenue::set_Currency(System.String)
extern void YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0 (void);
// 0x0000012D System.Nullable`1<System.Int32> YandexAppMetricaRevenue::get_Quantity()
extern void YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB (void);
// 0x0000012E System.Void YandexAppMetricaRevenue::set_Quantity(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C (void);
// 0x0000012F System.String YandexAppMetricaRevenue::get_ProductID()
extern void YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246 (void);
// 0x00000130 System.Void YandexAppMetricaRevenue::set_ProductID(System.String)
extern void YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727 (void);
// 0x00000131 System.Nullable`1<YandexAppMetricaReceipt> YandexAppMetricaRevenue::get_Receipt()
extern void YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101 (void);
// 0x00000132 System.Void YandexAppMetricaRevenue::set_Receipt(System.Nullable`1<YandexAppMetricaReceipt>)
extern void YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092 (void);
// 0x00000133 System.String YandexAppMetricaRevenue::get_Payload()
extern void YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E (void);
// 0x00000134 System.Void YandexAppMetricaRevenue::set_Payload(System.String)
extern void YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF (void);
// 0x00000135 System.String YandexAppMetricaReceipt::get_Data()
extern void YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA (void);
// 0x00000136 System.Void YandexAppMetricaReceipt::set_Data(System.String)
extern void YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447 (void);
// 0x00000137 System.String YandexAppMetricaReceipt::get_Signature()
extern void YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2 (void);
// 0x00000138 System.Void YandexAppMetricaReceipt::set_Signature(System.String)
extern void YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1 (void);
// 0x00000139 System.String YandexAppMetricaReceipt::get_TransactionID()
extern void YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7 (void);
// 0x0000013A System.Void YandexAppMetricaReceipt::set_TransactionID(System.String)
extern void YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC (void);
// 0x0000013B System.Void ChatController::OnEnable()
extern void ChatController_OnEnable_m025CE203564D82A1CDCE5E5719DB07E29811D0B7 (void);
// 0x0000013C System.Void ChatController::OnDisable()
extern void ChatController_OnDisable_mD49D03719CAEBB3F59F24A7FA8F4FD30C8B54E46 (void);
// 0x0000013D System.Void ChatController::AddToChatOutput(System.String)
extern void ChatController_AddToChatOutput_m9AB8FA8A32EA23F2E55795D8301ED0BF6A59F722 (void);
// 0x0000013E System.Void ChatController::.ctor()
extern void ChatController__ctor_m39C05E9EB8C8C40664D5655BCAB9EEBCB31F9719 (void);
// 0x0000013F System.Void DropdownSample::OnButtonClick()
extern void DropdownSample_OnButtonClick_mF83641F913F3455A3AE6ADCEA5DEB2A323FCB58F (void);
// 0x00000140 System.Void DropdownSample::.ctor()
extern void DropdownSample__ctor_m0F0C6DD803E99B2C15F3369ABD94EC273FADC75B (void);
// 0x00000141 System.Void EnvMapAnimator::Awake()
extern void EnvMapAnimator_Awake_m1D86ECDDD4A7A6DF98748B11BAC74D2D3B2F9435 (void);
// 0x00000142 System.Collections.IEnumerator EnvMapAnimator::Start()
extern void EnvMapAnimator_Start_mB8A6567BB58BDFD0FC70980AFA952748DF1E80E9 (void);
// 0x00000143 System.Void EnvMapAnimator::.ctor()
extern void EnvMapAnimator__ctor_m465E8527E49D1AA672A9A8A3B96FE78C24D11138 (void);
// 0x00000144 System.Void EnvMapAnimator/<Start>d__4::.ctor(System.Int32)
extern void U3CStartU3Ed__4__ctor_m432062D94FDEF42B01FAB69EBC06A4D137C525C2 (void);
// 0x00000145 System.Void EnvMapAnimator/<Start>d__4::System.IDisposable.Dispose()
extern void U3CStartU3Ed__4_System_IDisposable_Dispose_m8088B5A404D1CB754E73D37137F9A288E47E7E9C (void);
// 0x00000146 System.Boolean EnvMapAnimator/<Start>d__4::MoveNext()
extern void U3CStartU3Ed__4_MoveNext_mF689BF83350416D2071533C92042BF12AC52F0C0 (void);
// 0x00000147 System.Object EnvMapAnimator/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA3CCB9B113B234F43186B26439E10AD6609DD565 (void);
// 0x00000148 System.Void EnvMapAnimator/<Start>d__4::System.Collections.IEnumerator.Reset()
extern void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m3EF23BF40634D4262D8A2AE3DB14140FEFB4BF52 (void);
// 0x00000149 System.Object EnvMapAnimator/<Start>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_mB1C119A46A09AD8F0D4DE964F6B335BE2A460FAA (void);
// 0x0000014A System.Void FBWindowsA2UNotificationsManager::ScheduleButton()
extern void FBWindowsA2UNotificationsManager_ScheduleButton_m1E1DB09435A056565A733DD84847C9019D531892 (void);
// 0x0000014B System.Void FBWindowsA2UNotificationsManager::A2UNotificationCallback(Facebook.Unity.IScheduleAppToUserNotificationResult)
extern void FBWindowsA2UNotificationsManager_A2UNotificationCallback_mD5ECDC40A31DAAEAC969831DAF910E263C81A599 (void);
// 0x0000014C System.Void FBWindowsA2UNotificationsManager::.ctor()
extern void FBWindowsA2UNotificationsManager__ctor_mBCCEB3851695C75D2130EC70E1438AA15BFCD502 (void);
// 0x0000014D System.Void FBWindowsADSManager::LoadRewardedVideo(System.String)
extern void FBWindowsADSManager_LoadRewardedVideo_mA63B80E8909311DBBCDF248EEB2BDF40D1E13121 (void);
// 0x0000014E System.Void FBWindowsADSManager::ShowRewardedVideo(System.String)
extern void FBWindowsADSManager_ShowRewardedVideo_m1F84BE9B1757734C8BF3D3428774151748078886 (void);
// 0x0000014F System.Void FBWindowsADSManager::LoadInterstitialAd(System.String)
extern void FBWindowsADSManager_LoadInterstitialAd_m53B50AE6BB0B60147A5A8DC927DAE4F1957A175E (void);
// 0x00000150 System.Void FBWindowsADSManager::ShowInterstitialAd(System.String)
extern void FBWindowsADSManager_ShowInterstitialAd_m6E0127956CFF5DFED5F49E659735C8038CBAB664 (void);
// 0x00000151 System.Void FBWindowsADSManager::OnButtonLoadInterstitialAd()
extern void FBWindowsADSManager_OnButtonLoadInterstitialAd_mDA58548F3C90AFACD1F1FDBB5C88C76F5F394479 (void);
// 0x00000152 System.Void FBWindowsADSManager::OnButtonShowInterstitialAd()
extern void FBWindowsADSManager_OnButtonShowInterstitialAd_mC7791FE9006248604DC070887C57366CF0024A98 (void);
// 0x00000153 System.Void FBWindowsADSManager::OnButtonLoadRewardedVideo()
extern void FBWindowsADSManager_OnButtonLoadRewardedVideo_mBBEA74C400BA6BECD814B462177CB674F44032C6 (void);
// 0x00000154 System.Void FBWindowsADSManager::OnButtonShowRewardedVideo()
extern void FBWindowsADSManager_OnButtonShowRewardedVideo_m7476AEB159331175737AB663A0E84FA5A610FDF4 (void);
// 0x00000155 System.Void FBWindowsADSManager::.ctor()
extern void FBWindowsADSManager__ctor_m4E8E20D79CD84A71462FBC991B65E4589C22F021 (void);
// 0x00000156 System.Void FBWindowsADSManager/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m251A453E3B43DC6BC2112C50F95F77DC4875B3F3 (void);
// 0x00000157 System.Void FBWindowsADSManager/<>c__DisplayClass3_0::<LoadRewardedVideo>b__0(Facebook.Unity.IRewardedVideoResult)
extern void U3CU3Ec__DisplayClass3_0_U3CLoadRewardedVideoU3Eb__0_m754D9117465C8FB5F9100C1B117BF12E70440E1D (void);
// 0x00000158 System.Void FBWindowsADSManager/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m42B9115CD1146D2372A92D081BCE05985CD5204F (void);
// 0x00000159 System.Void FBWindowsADSManager/<>c__DisplayClass4_0::<ShowRewardedVideo>b__0(Facebook.Unity.IRewardedVideoResult)
extern void U3CU3Ec__DisplayClass4_0_U3CShowRewardedVideoU3Eb__0_m9809B444B20301ABA2F3E2B07C07B94A1EA562C3 (void);
// 0x0000015A System.Void FBWindowsADSManager/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m0DF6D9DEDA40D111C9BBA2E495E5E481E8AFFA38 (void);
// 0x0000015B System.Void FBWindowsADSManager/<>c__DisplayClass5_0::<LoadInterstitialAd>b__0(Facebook.Unity.IInterstitialAdResult)
extern void U3CU3Ec__DisplayClass5_0_U3CLoadInterstitialAdU3Eb__0_m4882E26A44D427FA7A811871207580F982465593 (void);
// 0x0000015C System.Void FBWindowsADSManager/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m56DB25DABAACEC78C71EC089971A0F4C1433CCA7 (void);
// 0x0000015D System.Void FBWindowsADSManager/<>c__DisplayClass6_0::<ShowInterstitialAd>b__0(Facebook.Unity.IInterstitialAdResult)
extern void U3CU3Ec__DisplayClass6_0_U3CShowInterstitialAdU3Eb__0_mB08457A09A7B46DE8D3F14B88EC4A84953115319 (void);
// 0x0000015E System.Void FBWindowsExampleTabsManager::Start()
extern void FBWindowsExampleTabsManager_Start_m8C61AD09CF633B711F483722EE00C57900D21D04 (void);
// 0x0000015F System.Void FBWindowsExampleTabsManager::ShowTab(System.Int32)
extern void FBWindowsExampleTabsManager_ShowTab_mE7CF605BF66BBEB5819398C232EDBECC90EFB4CC (void);
// 0x00000160 System.Void FBWindowsExampleTabsManager::.ctor()
extern void FBWindowsExampleTabsManager__ctor_mEB5F2889C9C25E2BE84D3FDA9E7A0B80B29E5E8E (void);
// 0x00000161 System.Void FBWindowsFriendsManager::Button_OpenReceivedInvitations()
extern void FBWindowsFriendsManager_Button_OpenReceivedInvitations_m758D303C1B87688B9EDA9FFE5FFC5CAD7676E2D7 (void);
// 0x00000162 System.Void FBWindowsFriendsManager::OpenFriendsDialogCallBack(Facebook.Unity.IGamingServicesFriendFinderResult)
extern void FBWindowsFriendsManager_OpenFriendsDialogCallBack_mD72E11E4C98EBDA98BAAEEB09AE370569DF76035 (void);
// 0x00000163 System.Void FBWindowsFriendsManager::Button_GetFriendFinderInvitations()
extern void FBWindowsFriendsManager_Button_GetFriendFinderInvitations_mB1577285B99213DCBB689720D5F1E083B63F58E6 (void);
// 0x00000164 System.Void FBWindowsFriendsManager::GetFriendFinderInvitationsCallback(Facebook.Unity.IFriendFinderInvitationResult)
extern void FBWindowsFriendsManager_GetFriendFinderInvitationsCallback_mF72BAFB745CAF465316CD1166A506529ED5FA2DE (void);
// 0x00000165 System.Void FBWindowsFriendsManager::DeleteFriendFinderInvitationCallback(Facebook.Unity.IFriendFinderInvitationResult)
extern void FBWindowsFriendsManager_DeleteFriendFinderInvitationCallback_m4EE9D1FB91B9AA763D4D0A68DA31A75874A5C76A (void);
// 0x00000166 System.Void FBWindowsFriendsManager::.ctor()
extern void FBWindowsFriendsManager__ctor_mC18D6A75FC2D9B17802011A41FB2EA03BD531B73 (void);
// 0x00000167 System.Void FBWindowsFriendsManager/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mD279371C9EA619A765000E3FD7EF87AFED864920 (void);
// 0x00000168 System.Void FBWindowsFriendsManager/<>c__DisplayClass6_0::<GetFriendFinderInvitationsCallback>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CGetFriendFinderInvitationsCallbackU3Eb__0_m4BC19A757542CB9B0139840529E7D9C34DB03D95 (void);
// 0x00000169 System.Void FBWindowsGraphAPIManager::Start()
extern void FBWindowsGraphAPIManager_Start_m6DD4F1E460767F0BB7458C73341E32B236BE821E (void);
// 0x0000016A System.Void FBWindowsGraphAPIManager::OnEnable()
extern void FBWindowsGraphAPIManager_OnEnable_m09429F8371FF238D0890A5905EA6F78B63719A6C (void);
// 0x0000016B System.Void FBWindowsGraphAPIManager::GraphAPI()
extern void FBWindowsGraphAPIManager_GraphAPI_mED08E62FF2549BB7F42D77DB74349B2F91B6B4AA (void);
// 0x0000016C System.Void FBWindowsGraphAPIManager::SetGraphAPiVersion()
extern void FBWindowsGraphAPIManager_SetGraphAPiVersion_m1EBD08D3D823FCCEB2D683CE55953ED5D09BD189 (void);
// 0x0000016D System.Void FBWindowsGraphAPIManager::.ctor()
extern void FBWindowsGraphAPIManager__ctor_mA2C5E55465E8939693FFCDEE0491D7AE821BA967 (void);
// 0x0000016E System.Void FBWindowsGraphAPIManager::<GraphAPI>b__8_0(Facebook.Unity.IGraphResult)
extern void FBWindowsGraphAPIManager_U3CGraphAPIU3Eb__8_0_m0E7B4C156EBF6318FAC13F8D7CC91D9FE86ADC95 (void);
// 0x0000016F System.Void FBWindowsInitManager::InitButton()
extern void FBWindowsInitManager_InitButton_m91585B7DDF180D6DC885ED0698860F4C2BC55C4E (void);
// 0x00000170 System.Void FBWindowsInitManager::InitCallback()
extern void FBWindowsInitManager_InitCallback_m9C355A126124B28332B2E50C87AEF92353909500 (void);
// 0x00000171 System.Void FBWindowsInitManager::OnHideUnity(System.Boolean)
extern void FBWindowsInitManager_OnHideUnity_mEA7D93BF70509FD8D85613E7B328F21047B09C40 (void);
// 0x00000172 System.Void FBWindowsInitManager::.ctor()
extern void FBWindowsInitManager__ctor_mE3DF8EE9E8FA9BE75F842720E968914DE8D45C8D (void);
// 0x00000173 System.Void FBWindowsLoginManager::LogInReadButton()
extern void FBWindowsLoginManager_LogInReadButton_mD464AA50450B8DCF2BF31AE166EDE4E6EDB78452 (void);
// 0x00000174 System.Void FBWindowsLoginManager::LogInPublishButton()
extern void FBWindowsLoginManager_LogInPublishButton_mF4A5194A80AA8E3513F8D072E92A0E8693790293 (void);
// 0x00000175 System.Void FBWindowsLoginManager::LogOutButton()
extern void FBWindowsLoginManager_LogOutButton_mE63114361311C63C41D30BAEDD7D25837F2EA0BC (void);
// 0x00000176 System.Void FBWindowsLoginManager::AuthCallback(Facebook.Unity.ILoginResult)
extern void FBWindowsLoginManager_AuthCallback_m1EA6C32AE674B4507BB9AF164B65D5B1F10D4448 (void);
// 0x00000177 System.Void FBWindowsLoginManager::GetCurrentProfile()
extern void FBWindowsLoginManager_GetCurrentProfile_m286865D50DF36DD633A27B3BA88B4129E93FC458 (void);
// 0x00000178 System.Collections.IEnumerator FBWindowsLoginManager::LoadPictureFromUrl(System.String,UnityEngine.UI.RawImage)
extern void FBWindowsLoginManager_LoadPictureFromUrl_mC19CD6E89FEBFC0AE1360BA22D255BC4AFF3FB29 (void);
// 0x00000179 System.Void FBWindowsLoginManager::.ctor()
extern void FBWindowsLoginManager__ctor_m341EF79AEF1BCDB243A3045D2CDE6FF9DCE47137 (void);
// 0x0000017A System.Void FBWindowsLoginManager::<GetCurrentProfile>b__8_0(Facebook.Unity.IProfileResult)
extern void FBWindowsLoginManager_U3CGetCurrentProfileU3Eb__8_0_m170EA42BAD2A057D3413A29A91A6F05FD065A5C4 (void);
// 0x0000017B System.Void FBWindowsLoginManager/<LoadPictureFromUrl>d__9::.ctor(System.Int32)
extern void U3CLoadPictureFromUrlU3Ed__9__ctor_m827EA23B5E90833084433C2C188380C10F3A9FB3 (void);
// 0x0000017C System.Void FBWindowsLoginManager/<LoadPictureFromUrl>d__9::System.IDisposable.Dispose()
extern void U3CLoadPictureFromUrlU3Ed__9_System_IDisposable_Dispose_mF930FC66EBBC3D434FF57A27F51969F5961FF78B (void);
// 0x0000017D System.Boolean FBWindowsLoginManager/<LoadPictureFromUrl>d__9::MoveNext()
extern void U3CLoadPictureFromUrlU3Ed__9_MoveNext_mF39A948A94D83C1E91739BF83261977A36E5A79F (void);
// 0x0000017E System.Object FBWindowsLoginManager/<LoadPictureFromUrl>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C98A8C33509F21B43E220E67944032C515DEA35 (void);
// 0x0000017F System.Void FBWindowsLoginManager/<LoadPictureFromUrl>d__9::System.Collections.IEnumerator.Reset()
extern void U3CLoadPictureFromUrlU3Ed__9_System_Collections_IEnumerator_Reset_mEF04196D6410EF119A7F8616B6E698C924FF5B92 (void);
// 0x00000180 System.Object FBWindowsLoginManager/<LoadPictureFromUrl>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__9_System_Collections_IEnumerator_get_Current_m8D035DE9C23C067E0884BEFCE31E0D720DD4E2EF (void);
// 0x00000181 System.Void FBWindowsLogsManager::Awake()
extern void FBWindowsLogsManager_Awake_mDA9315E97E655112AAF12CE8DC662295101E3776 (void);
// 0x00000182 System.Void FBWindowsLogsManager::DebugLog(System.String)
extern void FBWindowsLogsManager_DebugLog_m3B4802A0C38BC8BA51F4CE22D774DFC48A2B1B7D (void);
// 0x00000183 System.Void FBWindowsLogsManager::DebugErrorLog(System.String)
extern void FBWindowsLogsManager_DebugErrorLog_m113DD71EC8DE8EC5C4763796B6C47E14CD4F3F11 (void);
// 0x00000184 System.Void FBWindowsLogsManager::DebugWarningLog(System.String)
extern void FBWindowsLogsManager_DebugWarningLog_mB3950B0DB164858F93DA7E26A7AF770EEB3B7430 (void);
// 0x00000185 System.Void FBWindowsLogsManager::DebugClean()
extern void FBWindowsLogsManager_DebugClean_mDD86E796937794CA11126DE45D17C12B39BEB659 (void);
// 0x00000186 System.Void FBWindowsLogsManager::.ctor()
extern void FBWindowsLogsManager__ctor_m2CDF3DCD98FDEFC87A323950CC22C38C837B1F19 (void);
// 0x00000187 System.Void FBWindowsPurchaseManager::GetCatalogButton()
extern void FBWindowsPurchaseManager_GetCatalogButton_mB285FE3F2C1AE92041601DE223130E205DE91769 (void);
// 0x00000188 System.Void FBWindowsPurchaseManager::ProcessGetCatalog(Facebook.Unity.ICatalogResult)
extern void FBWindowsPurchaseManager_ProcessGetCatalog_mBC691143EF994F995AF20C4185E0E3DBA6F9FCE8 (void);
// 0x00000189 System.Collections.IEnumerator FBWindowsPurchaseManager::LoadPictureFromUrl(System.String,UnityEngine.UI.RawImage)
extern void FBWindowsPurchaseManager_LoadPictureFromUrl_m8F576F8433A34198C9775644188EFCADBC0C6E6F (void);
// 0x0000018A System.Void FBWindowsPurchaseManager::ProcessPurchase(Facebook.Unity.IPurchaseResult)
extern void FBWindowsPurchaseManager_ProcessPurchase_mA20D49D3AAB967C089CE41DF3DA8A0351A6D6CD2 (void);
// 0x0000018B System.Void FBWindowsPurchaseManager::GetPurchases()
extern void FBWindowsPurchaseManager_GetPurchases_mCB24A00C33F68F6CB1ADFF31F3840F124338750A (void);
// 0x0000018C System.Void FBWindowsPurchaseManager::processPurchases(Facebook.Unity.IPurchasesResult)
extern void FBWindowsPurchaseManager_processPurchases_m4751E163AB4A2B005B1D84EFBC2A2D37C3BF535C (void);
// 0x0000018D System.Void FBWindowsPurchaseManager::.ctor()
extern void FBWindowsPurchaseManager__ctor_m67504549059953A95E28473A82D9071D40D5A84A (void);
// 0x0000018E System.Void FBWindowsPurchaseManager/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m8E0D79554FD9F8DDF8F151F779BEC80486594EC0 (void);
// 0x0000018F System.Void FBWindowsPurchaseManager/<>c__DisplayClass5_0::<ProcessGetCatalog>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CProcessGetCatalogU3Eb__0_m4CF890B17D5B9D50CD263816F450456E16AFD1FE (void);
// 0x00000190 System.Void FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::.ctor(System.Int32)
extern void U3CLoadPictureFromUrlU3Ed__6__ctor_mFCAC1E0CD9AFEF9D4FC7C2B08FC7525F559DA8A2 (void);
// 0x00000191 System.Void FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.IDisposable.Dispose()
extern void U3CLoadPictureFromUrlU3Ed__6_System_IDisposable_Dispose_m8C674AE011C63B72DCEFF7368DA58D764B79C3EA (void);
// 0x00000192 System.Boolean FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::MoveNext()
extern void U3CLoadPictureFromUrlU3Ed__6_MoveNext_m1A03D1B07139C8798F268EAA92134F89793604AF (void);
// 0x00000193 System.Object FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F863DD15052B9E3A586A1328846AF3C233EBA15 (void);
// 0x00000194 System.Void FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.Collections.IEnumerator.Reset()
extern void U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_Reset_m89151C82740561EB785AF5B2A4AB8303F214CF0A (void);
// 0x00000195 System.Object FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_get_Current_m44D460CB604C85FBE166902DEE8B3AF96DF5E19B (void);
// 0x00000196 System.Void FBWindowsPurchaseManager/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m56D4F574162DAA0DC9EA9494462CCD617008F901 (void);
// 0x00000197 System.Void FBWindowsPurchaseManager/<>c__DisplayClass9_0::<processPurchases>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__0_m672EF6F8DAEF89BA3DD0BFA610B30D9F01130E6B (void);
// 0x00000198 System.Void FBWindowsPurchaseManager/<>c__DisplayClass9_0::<processPurchases>b__1(Facebook.Unity.IConsumePurchaseResult)
extern void U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__1_m16A8CAD55992864B2DE76CFC1ECE2B903727225B (void);
// 0x00000199 System.Void FBWindowsShareManager::Button_UploadImage()
extern void FBWindowsShareManager_Button_UploadImage_m1FFD7CDC7EF00577C2D8DE56396794E10A6338EC (void);
// 0x0000019A System.Void FBWindowsShareManager::Button_UploadVideo()
extern void FBWindowsShareManager_Button_UploadVideo_m71548715579F703D2AAAD7BD9EAC85B03E96CAF5 (void);
// 0x0000019B System.Void FBWindowsShareManager::CallbackUploadImage(Facebook.Unity.IMediaUploadResult)
extern void FBWindowsShareManager_CallbackUploadImage_m23D3F141ABD3F7B5C1ED2495125B844A04271A51 (void);
// 0x0000019C System.Void FBWindowsShareManager::CallbackUploadVideo(Facebook.Unity.IMediaUploadResult)
extern void FBWindowsShareManager_CallbackUploadVideo_mD73A78415B614804367AC60041621D43CAA62B2D (void);
// 0x0000019D System.Void FBWindowsShareManager::.ctor()
extern void FBWindowsShareManager__ctor_m71A6FCB04FFEF4335E4A2871F560DF65149043A2 (void);
// 0x0000019E System.Collections.Generic.Dictionary`2<System.String,System.String> FBWindowsTournamentsManager::ConvertDataToDict(System.String)
extern void FBWindowsTournamentsManager_ConvertDataToDict_m957B59DCBCBBA8ADB9BF14CAC897915650000123 (void);
// 0x0000019F System.Void FBWindowsTournamentsManager::Button_CreateTournament()
extern void FBWindowsTournamentsManager_Button_CreateTournament_m48593D0E8A103A49FCE369372C59D67668D79E63 (void);
// 0x000001A0 System.Void FBWindowsTournamentsManager::CallbackCreateTournament(Facebook.Unity.ITournamentResult)
extern void FBWindowsTournamentsManager_CallbackCreateTournament_mA8C1C64D80F7D1092EF621BDB587E3856FB16219 (void);
// 0x000001A1 System.Void FBWindowsTournamentsManager::Button_PostSessionScore()
extern void FBWindowsTournamentsManager_Button_PostSessionScore_m9D92F41F413320DB5633DFF143DA3649D975FBE6 (void);
// 0x000001A2 System.Void FBWindowsTournamentsManager::CallbackPostSessionScore(Facebook.Unity.ISessionScoreResult)
extern void FBWindowsTournamentsManager_CallbackPostSessionScore_mB9180114F19BE46EBC92B4093577F1DC4ECFCAFA (void);
// 0x000001A3 System.Void FBWindowsTournamentsManager::Button_PostTournamentScore()
extern void FBWindowsTournamentsManager_Button_PostTournamentScore_mCDDDD7549C629288461E228D9A6CB2CBE8792BAB (void);
// 0x000001A4 System.Void FBWindowsTournamentsManager::CallbackPostTournamentScore(Facebook.Unity.ITournamentScoreResult)
extern void FBWindowsTournamentsManager_CallbackPostTournamentScore_mE8DF6C42C53FBCE134D892AA48C5379CEF8B7BBF (void);
// 0x000001A5 System.Void FBWindowsTournamentsManager::Button_ShareTournament()
extern void FBWindowsTournamentsManager_Button_ShareTournament_m2993547EA9296BF2A66B87BB4BDBBED59AFB5F33 (void);
// 0x000001A6 System.Void FBWindowsTournamentsManager::CallbackShareTournament(Facebook.Unity.ITournamentScoreResult)
extern void FBWindowsTournamentsManager_CallbackShareTournament_m42520665AC25B3C5AA001A98A7AC9F63E114D720 (void);
// 0x000001A7 System.Void FBWindowsTournamentsManager::Button_GetTournament()
extern void FBWindowsTournamentsManager_Button_GetTournament_mF86D25202EA500123CC2A1A0E910E467627FA915 (void);
// 0x000001A8 System.Void FBWindowsTournamentsManager::CallbackGetTournament(Facebook.Unity.ITournamentResult)
extern void FBWindowsTournamentsManager_CallbackGetTournament_m62C3F26B7629D13AD79547392BF904925A5B7FF0 (void);
// 0x000001A9 System.Void FBWindowsTournamentsManager::.ctor()
extern void FBWindowsTournamentsManager__ctor_m65AFDD841835BB7A8550C12F089A9A5CC6D1ACE4 (void);
// 0x000001AA System.Void FBWindowsVirtualGamepadManager::SetVirtualGamepadLayout()
extern void FBWindowsVirtualGamepadManager_SetVirtualGamepadLayout_mDE6BE733314A7BA7A039F1ADE930948BDD491619 (void);
// 0x000001AB System.Void FBWindowsVirtualGamepadManager::CallbackSetVirtualGamepadLayout(Facebook.Unity.IVirtualGamepadLayoutResult)
extern void FBWindowsVirtualGamepadManager_CallbackSetVirtualGamepadLayout_m048B38EA808953D897CC2599977DF0DFE7BBABBA (void);
// 0x000001AC System.Void FBWindowsVirtualGamepadManager::.ctor()
extern void FBWindowsVirtualGamepadManager__ctor_mF19C463251E64906F96CDD79C29649B2E379A2AF (void);
// 0x000001AD System.Void Vehicles.Vehicle::Start()
extern void Vehicle_Start_m0C9A75B095211A28573B012EF3BEEEE1B08EE8D1 (void);
// 0x000001AE System.Void Vehicles.Vehicle::.ctor()
extern void Vehicle__ctor_m70D39ED21C861189C612A13D1B5B5E3A96AA3054 (void);
// 0x000001AF System.Void Vehicles.Vehicle::<Start>b__3_0()
extern void Vehicle_U3CStartU3Eb__3_0_m8DF14843247458CB99FABAAF5BE561C39D380DB1 (void);
// 0x000001B0 System.Single Turns.TurnPoint::get_TurnDegrees()
extern void TurnPoint_get_TurnDegrees_m14981448C9EE217B4501CD90B3FD50CC0C6DC778 (void);
// 0x000001B1 UnityEngine.Transform Turns.TurnPoint::get_RotationPivot()
extern void TurnPoint_get_RotationPivot_m1B00DBB2B581E1500BB9179606C54326D1ED2FC8 (void);
// 0x000001B2 System.Void Turns.TurnPoint::.ctor()
extern void TurnPoint__ctor_mB57C81447C3A4E8036EAAACFD4000D7CAECD4034 (void);
// 0x000001B3 System.Void Saves.ItemScore::.ctor()
extern void ItemScore__ctor_m71508B74DCD66DDEB8E6D220F3DE9D11E5FC8C52 (void);
// 0x000001B4 System.Void Saves.Metrics::PrintInfo()
extern void Metrics_PrintInfo_m13BFBC7C6406F103BA3501ECBE555E521CCE2E07 (void);
// 0x000001B5 System.Void Saves.Metrics::.ctor()
extern void Metrics__ctor_m1CD8F01A46856A1A4C04C9869C3A9CB52E9EDD7A (void);
// 0x000001B6 System.Void Saves.SaveSystem::Save(T,System.String)
// 0x000001B7 T Saves.SaveSystem::Load(System.String)
// 0x000001B8 System.Void Levels.LevelLoader::Start()
extern void LevelLoader_Start_m2462B25C4957882610B17EF83DE17A75411407F2 (void);
// 0x000001B9 System.Void Levels.LevelLoader::.ctor()
extern void LevelLoader__ctor_m21BE708E25A22A44C82AD416564756EAEEA869E6 (void);
// 0x000001BA System.Void Levels.LevelLoader::.cctor()
extern void LevelLoader__cctor_m83E64011E188EEEA2ACF8CE0F266C761AFC2BFF9 (void);
// 0x000001BB System.Void Levels.LevelLoader/<>c::.cctor()
extern void U3CU3Ec__cctor_m0A8A2388F9F88FAC8D5560F84CDF4B0D8F54E3AA (void);
// 0x000001BC System.Void Levels.LevelLoader/<>c::.ctor()
extern void U3CU3Ec__ctor_m4953004BC22BE53939200E58C10E88F4F1F6C614 (void);
// 0x000001BD System.Void Levels.LevelLoader/<>c::<Start>b__2_0()
extern void U3CU3Ec_U3CStartU3Eb__2_0_m8BEA0BFB2966989091ABA1E3027244294CEDBB09 (void);
// 0x000001BE System.Void Levels.MetricsCalculator::Awake()
extern void MetricsCalculator_Awake_m43D18675F9825D2445AFB7D48896F99DF295B49C (void);
// 0x000001BF System.Void Levels.MetricsCalculator::SendLevelStartEvent()
extern void MetricsCalculator_SendLevelStartEvent_m094CB475A4EAE60B25ECF54FDC9702B3FD46C6BE (void);
// 0x000001C0 System.Void Levels.MetricsCalculator::SendLevelEndEvent()
extern void MetricsCalculator_SendLevelEndEvent_m9AC1332F50754278A8F2042A43B85C5D48F4FB51 (void);
// 0x000001C1 System.Void Levels.MetricsCalculator::.ctor()
extern void MetricsCalculator__ctor_mD6AD4B03F08BF54BC81159470D478B3D7783788B (void);
// 0x000001C2 System.Void Levels.MetricsCalculator::.cctor()
extern void MetricsCalculator__cctor_mA28F9EA5B3EB8EE43349CF0DFF7C6DD90EF601FC (void);
// 0x000001C3 System.Void Levels.MetricsCalculator::<Awake>b__6_0(System.Int32,System.Int32)
extern void MetricsCalculator_U3CAwakeU3Eb__6_0_m92D0E2111652BCF92DAA7DB4D85411E24C3069AD (void);
// 0x000001C4 System.Void Levels.StartTutorial::Awake()
extern void StartTutorial_Awake_m6C173CFD0CA88462F361810DE415D6ACA5798030 (void);
// 0x000001C5 System.Void Levels.StartTutorial::Start()
extern void StartTutorial_Start_m60C179D0272A1CD538FC81F5AE55A58A253C9C02 (void);
// 0x000001C6 System.Void Levels.StartTutorial::Update()
extern void StartTutorial_Update_mB3A7847314E61BBD585EBD2F4940A9C5D733AFA4 (void);
// 0x000001C7 System.Void Levels.StartTutorial::.ctor()
extern void StartTutorial__ctor_mD57F3F87B9A18483B317618D29B8B3EDC487118F (void);
// 0x000001C8 System.Void HumanSpawn.HumanCountChanger::Start()
extern void HumanCountChanger_Start_m0C8B8463984C2E1832E5B7074710615387FD2B31 (void);
// 0x000001C9 System.Void HumanSpawn.HumanCountChanger::SpawnHumans(Core.GenderType,System.Int32)
extern void HumanCountChanger_SpawnHumans_mF64C13564885622DD482590A27EB64139617DD58 (void);
// 0x000001CA System.Int32 HumanSpawn.HumanCountChanger::RemoveHumans(Core.GenderType,System.Int32)
extern void HumanCountChanger_RemoveHumans_mF779874CE6E5525A43A347BBAB9BEB15B8688526 (void);
// 0x000001CB System.Collections.IEnumerator HumanSpawn.HumanCountChanger::DelayHumanDeactivationCO(UnityEngine.GameObject)
extern void HumanCountChanger_DelayHumanDeactivationCO_m1D1169F418E5DF8A82B0DAA1226513314513288D (void);
// 0x000001CC System.Void HumanSpawn.HumanCountChanger::UpdateHumanPos(UnityEngine.GameObject)
extern void HumanCountChanger_UpdateHumanPos_m1358795A387708B438BE7E246B2857911B8D217C (void);
// 0x000001CD System.Void HumanSpawn.HumanCountChanger::.ctor()
extern void HumanCountChanger__ctor_mCCB5D782C2B0C042FB877A3BBB11A5CD3FBC45BB (void);
// 0x000001CE System.Void HumanSpawn.HumanCountChanger::.cctor()
extern void HumanCountChanger__cctor_mA08D097893FAB63BE6264C475164CE0855D401C6 (void);
// 0x000001CF System.Void HumanSpawn.HumanCountChanger::<Start>b__7_0(Core.GenderType)
extern void HumanCountChanger_U3CStartU3Eb__7_0_mC53795D79807F7970D785A229C4B8136ECCE8885 (void);
// 0x000001D0 System.Void HumanSpawn.HumanCountChanger/<DelayHumanDeactivationCO>d__10::.ctor(System.Int32)
extern void U3CDelayHumanDeactivationCOU3Ed__10__ctor_mE7CE726F6CE2A066E894EE2374E865C6CF6250ED (void);
// 0x000001D1 System.Void HumanSpawn.HumanCountChanger/<DelayHumanDeactivationCO>d__10::System.IDisposable.Dispose()
extern void U3CDelayHumanDeactivationCOU3Ed__10_System_IDisposable_Dispose_mBCA7352CA4DBD971EB7FAFEB4F839882A5A9D328 (void);
// 0x000001D2 System.Boolean HumanSpawn.HumanCountChanger/<DelayHumanDeactivationCO>d__10::MoveNext()
extern void U3CDelayHumanDeactivationCOU3Ed__10_MoveNext_mD9C23104485E42A5CAC8FE3786E2C6A27AE99294 (void);
// 0x000001D3 System.Object HumanSpawn.HumanCountChanger/<DelayHumanDeactivationCO>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDelayHumanDeactivationCOU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4DC17A3A1469794014EBCFB36D95A8E1DEAF7329 (void);
// 0x000001D4 System.Void HumanSpawn.HumanCountChanger/<DelayHumanDeactivationCO>d__10::System.Collections.IEnumerator.Reset()
extern void U3CDelayHumanDeactivationCOU3Ed__10_System_Collections_IEnumerator_Reset_mB8FC6490EEA649CFE564CB77E0BAFC598F2ED2CE (void);
// 0x000001D5 System.Object HumanSpawn.HumanCountChanger/<DelayHumanDeactivationCO>d__10::System.Collections.IEnumerator.get_Current()
extern void U3CDelayHumanDeactivationCOU3Ed__10_System_Collections_IEnumerator_get_Current_m1883DA14A08E63B1C4EC7637413333AB5923BA09 (void);
// 0x000001D6 HumanSpawn.HumanPool HumanSpawn.HumanPool::get_Inst()
extern void HumanPool_get_Inst_m3AFD4F792A5EE69CEEE43FAE407F65B82FB49454 (void);
// 0x000001D7 System.Void HumanSpawn.HumanPool::set_Inst(HumanSpawn.HumanPool)
extern void HumanPool_set_Inst_m5BAE41B30730C1F56DA07F464E3948E1C85612B0 (void);
// 0x000001D8 System.Void HumanSpawn.HumanPool::Awake()
extern void HumanPool_Awake_mCE3EBCF00FA019E62BE8B646CEB5BB1B76310D30 (void);
// 0x000001D9 System.Void HumanSpawn.HumanPool::Add(UnityEngine.GameObject)
extern void HumanPool_Add_m87B6D2532632CE3AB34F443EE84689B7D077B0A7 (void);
// 0x000001DA System.Boolean HumanSpawn.HumanPool::TryGet(UnityEngine.GameObject&,System.String)
extern void HumanPool_TryGet_m88DFE549C40CE0B62401F26D7179D24A3E4DA9BA (void);
// 0x000001DB System.Void HumanSpawn.HumanPool::.ctor()
extern void HumanPool__ctor_m783BE38D0439353A5883A7B769B1A9DD8AA0EAA0 (void);
// 0x000001DC System.Collections.Generic.List`1<Human.HumanMovement> HumanAttraction.Attractor::get_Humans()
extern void Attractor_get_Humans_m59412ED65961704207810CB86F743D47AD4B4323 (void);
// 0x000001DD HumanAttraction.Attractor HumanAttraction.Attractor::get_Inst()
extern void Attractor_get_Inst_m3B4D66CD2D0B3F54C12A9EBE1F183A088A254084 (void);
// 0x000001DE System.Void HumanAttraction.Attractor::set_Inst(HumanAttraction.Attractor)
extern void Attractor_set_Inst_mB2E04661214E6E2DEC06683A8A4E796DA6C766F1 (void);
// 0x000001DF System.Void HumanAttraction.Attractor::Awake()
extern void Attractor_Awake_m27EB7E078030FF00E5E9C66A02BFBFA9B2A0117D (void);
// 0x000001E0 System.Void HumanAttraction.Attractor::Start()
extern void Attractor_Start_m5754CAFE1899C40473D6E755350EC028AD9F36C3 (void);
// 0x000001E1 System.Void HumanAttraction.Attractor::FixedUpdate()
extern void Attractor_FixedUpdate_mC36EC9F43486E216EF76EC080431E60897C0B7CD (void);
// 0x000001E2 System.Void HumanAttraction.Attractor::.ctor()
extern void Attractor__ctor_mBD19F128D20410642A25445B20FB0BD15C252306 (void);
// 0x000001E3 System.Void HumanAttraction.Attractor::<Start>b__10_0(UnityEngine.GameObject)
extern void Attractor_U3CStartU3Eb__10_0_m4E6A9D948CCFEC800184132B6AD86E8387F5DACA (void);
// 0x000001E4 System.Void HumanAttraction.Attractor::<Start>b__10_1(UnityEngine.GameObject)
extern void Attractor_U3CStartU3Eb__10_1_m4851FACA4A9A3274CF555993B4192610DCF104C2 (void);
// 0x000001E5 HumanAttraction.AttractorForwardMover HumanAttraction.AttractorForwardMover::get_Inst()
extern void AttractorForwardMover_get_Inst_mC5CEE88B0C4F323509DC0C99F20A57AF03FB1ED4 (void);
// 0x000001E6 System.Void HumanAttraction.AttractorForwardMover::set_Inst(HumanAttraction.AttractorForwardMover)
extern void AttractorForwardMover_set_Inst_m7DFB58EFB271B373D2AB769F294538E6C7C187DC (void);
// 0x000001E7 System.Single HumanAttraction.AttractorForwardMover::get_StartSpeed()
extern void AttractorForwardMover_get_StartSpeed_m04816FEB7046AE5396B39C0F6E33B7081CCCEAEF (void);
// 0x000001E8 System.Single HumanAttraction.AttractorForwardMover::get_CurrentSpeed()
extern void AttractorForwardMover_get_CurrentSpeed_m65553D2692FE358F9B88C003E1AEA67713322991 (void);
// 0x000001E9 System.Void HumanAttraction.AttractorForwardMover::set_CurrentSpeed(System.Single)
extern void AttractorForwardMover_set_CurrentSpeed_m66E4052D0EE4689EE59541C9AAC51F2B99C7639B (void);
// 0x000001EA System.Void HumanAttraction.AttractorForwardMover::ResetSpeed()
extern void AttractorForwardMover_ResetSpeed_mB97C9C0149C01C68AAFEFB7F2822062A1AF52B1B (void);
// 0x000001EB System.Void HumanAttraction.AttractorForwardMover::SetSpeed(System.Single,System.Boolean)
extern void AttractorForwardMover_SetSpeed_m2AACB9CF45F203857FF98FD90DDF60932C517197 (void);
// 0x000001EC System.Void HumanAttraction.AttractorForwardMover::SetStartSpeed(System.Single)
extern void AttractorForwardMover_SetStartSpeed_mD74E2D46214970CABCEC547C45921645A98AE9D8 (void);
// 0x000001ED System.Void HumanAttraction.AttractorForwardMover::Awake()
extern void AttractorForwardMover_Awake_mB14773A6C2225B4CC49A7B119294750B61A3EEEC (void);
// 0x000001EE System.Void HumanAttraction.AttractorForwardMover::Start()
extern void AttractorForwardMover_Start_mD7515ACAA22030D319D855A9721067F8901B408D (void);
// 0x000001EF System.Void HumanAttraction.AttractorForwardMover::Update()
extern void AttractorForwardMover_Update_m9EA33B690D100A8EF667CEF440F5D31A7D23ED00 (void);
// 0x000001F0 System.Void HumanAttraction.AttractorForwardMover::CorrectXPosition()
extern void AttractorForwardMover_CorrectXPosition_mE8786D403AD78292E402C244879FFC985B6B8088 (void);
// 0x000001F1 System.Collections.IEnumerator HumanAttraction.AttractorForwardMover::CorrectXAxisCO()
extern void AttractorForwardMover_CorrectXAxisCO_m4CFFB7A3C3313FCCB45EB49AACF7F76E1DD14FDC (void);
// 0x000001F2 System.Void HumanAttraction.AttractorForwardMover::Move()
extern void AttractorForwardMover_Move_mBBADE7C75781925730C17B6886197F084959FAE5 (void);
// 0x000001F3 System.Collections.IEnumerator HumanAttraction.AttractorForwardMover::MoveToEndCO(UnityEngine.Vector3)
extern void AttractorForwardMover_MoveToEndCO_mD63E5A61A5602D65335409FA8EC972FED80F7DD8 (void);
// 0x000001F4 System.Void HumanAttraction.AttractorForwardMover::.ctor()
extern void AttractorForwardMover__ctor_mEF9B52D735B63DCB74D348E8B928A6C7A2B93CA4 (void);
// 0x000001F5 System.Void HumanAttraction.AttractorForwardMover::.cctor()
extern void AttractorForwardMover__cctor_m29429F5165F3A92950A394CBDA0A9BC95E0FFD1E (void);
// 0x000001F6 System.Void HumanAttraction.AttractorForwardMover::<Start>b__21_0()
extern void AttractorForwardMover_U3CStartU3Eb__21_0_m5A1C98C7F5102A0FF9D3EDFE9055961F4ADF33D1 (void);
// 0x000001F7 System.Void HumanAttraction.AttractorForwardMover::<Start>b__21_1(UnityEngine.Vector3)
extern void AttractorForwardMover_U3CStartU3Eb__21_1_m6C8022354EFDB1B06F1AD9D822A69893AACB2165 (void);
// 0x000001F8 System.Void HumanAttraction.AttractorForwardMover/<CorrectXAxisCO>d__24::.ctor(System.Int32)
extern void U3CCorrectXAxisCOU3Ed__24__ctor_m7B0E05EC173F7CF39DBF42E3A6B477A4253FEF8E (void);
// 0x000001F9 System.Void HumanAttraction.AttractorForwardMover/<CorrectXAxisCO>d__24::System.IDisposable.Dispose()
extern void U3CCorrectXAxisCOU3Ed__24_System_IDisposable_Dispose_m419471812079070146C0E03F364774EE7D0A9ADE (void);
// 0x000001FA System.Boolean HumanAttraction.AttractorForwardMover/<CorrectXAxisCO>d__24::MoveNext()
extern void U3CCorrectXAxisCOU3Ed__24_MoveNext_mF69427A22E5BDF2716381CC0F7744C6FBB3D8901 (void);
// 0x000001FB System.Object HumanAttraction.AttractorForwardMover/<CorrectXAxisCO>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCorrectXAxisCOU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDB433624B54BF11744FC0002322D0EF8E50F561A (void);
// 0x000001FC System.Void HumanAttraction.AttractorForwardMover/<CorrectXAxisCO>d__24::System.Collections.IEnumerator.Reset()
extern void U3CCorrectXAxisCOU3Ed__24_System_Collections_IEnumerator_Reset_mD64D77CD313E3CA5D3E091DA4AB4E6A747EC7E9F (void);
// 0x000001FD System.Object HumanAttraction.AttractorForwardMover/<CorrectXAxisCO>d__24::System.Collections.IEnumerator.get_Current()
extern void U3CCorrectXAxisCOU3Ed__24_System_Collections_IEnumerator_get_Current_m37CE776C8A0EFAEC4D4CE554360B5794AC4CDE5F (void);
// 0x000001FE System.Void HumanAttraction.AttractorForwardMover/<MoveToEndCO>d__26::.ctor(System.Int32)
extern void U3CMoveToEndCOU3Ed__26__ctor_mAD7F0035B13B92CAE54B7129113EC730A949D906 (void);
// 0x000001FF System.Void HumanAttraction.AttractorForwardMover/<MoveToEndCO>d__26::System.IDisposable.Dispose()
extern void U3CMoveToEndCOU3Ed__26_System_IDisposable_Dispose_mAC25B4C8AC02477994CAC40F7521EFEB87924267 (void);
// 0x00000200 System.Boolean HumanAttraction.AttractorForwardMover/<MoveToEndCO>d__26::MoveNext()
extern void U3CMoveToEndCOU3Ed__26_MoveNext_m1CA1C41EE47EFC6A648E552A1DAFEC14B8FB46AE (void);
// 0x00000201 System.Object HumanAttraction.AttractorForwardMover/<MoveToEndCO>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CMoveToEndCOU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m98D175BDBD5CCA03733B438EC7B7518A71159822 (void);
// 0x00000202 System.Void HumanAttraction.AttractorForwardMover/<MoveToEndCO>d__26::System.Collections.IEnumerator.Reset()
extern void U3CMoveToEndCOU3Ed__26_System_Collections_IEnumerator_Reset_m4F0502882EB75A34AFC8ADDECC33E3D7387D5812 (void);
// 0x00000203 System.Object HumanAttraction.AttractorForwardMover/<MoveToEndCO>d__26::System.Collections.IEnumerator.get_Current()
extern void U3CMoveToEndCOU3Ed__26_System_Collections_IEnumerator_get_Current_mFEF685B8D64DBEC141E17E3BF832FB7BD0209A49 (void);
// 0x00000204 System.Void HumanAttraction.AttractorRotator::Start()
extern void AttractorRotator_Start_m1DA3F923B1C66157DA0237D4EC362D52581E0A44 (void);
// 0x00000205 System.Void HumanAttraction.AttractorRotator::RaiseOnRotatedEvent()
extern void AttractorRotator_RaiseOnRotatedEvent_m0B28EFE22444142E39085E8996D38F10818E8B1B (void);
// 0x00000206 System.Void HumanAttraction.AttractorRotator::RotateToEndPoint(UnityEngine.Vector3)
extern void AttractorRotator_RotateToEndPoint_mD3E655091C610BD151B62374F1C53D4454693304 (void);
// 0x00000207 System.Void HumanAttraction.AttractorRotator::SetDesiredSpeed(UnityEngine.Vector3)
extern void AttractorRotator_SetDesiredSpeed_mE98FDEA58707463E2506707385F74D97659DE3F0 (void);
// 0x00000208 System.Collections.IEnumerator HumanAttraction.AttractorRotator::RotateAroundCO(System.Single,UnityEngine.Vector3)
extern void AttractorRotator_RotateAroundCO_mB49CACF58499B8334F2B9A25CC580677AF856B18 (void);
// 0x00000209 System.Void HumanAttraction.AttractorRotator::OnTriggerEnter(UnityEngine.Collider)
extern void AttractorRotator_OnTriggerEnter_m21F34D3FACB5C1442488C3E8A07215FD14F44BE4 (void);
// 0x0000020A System.Void HumanAttraction.AttractorRotator::.ctor()
extern void AttractorRotator__ctor_m9FCC638D697BDC53784DDBC7F252287DCFC0A1F8 (void);
// 0x0000020B System.Void HumanAttraction.AttractorRotator::.cctor()
extern void AttractorRotator__cctor_m8410B5D5F8188357A18C32D7B1CAECE301D73104 (void);
// 0x0000020C System.Void HumanAttraction.AttractorRotator/<RotateAroundCO>d__12::.ctor(System.Int32)
extern void U3CRotateAroundCOU3Ed__12__ctor_mAA3FC64CC0F60DB438579733CF492269DE1D7CD5 (void);
// 0x0000020D System.Void HumanAttraction.AttractorRotator/<RotateAroundCO>d__12::System.IDisposable.Dispose()
extern void U3CRotateAroundCOU3Ed__12_System_IDisposable_Dispose_m88F30E4B8D9C27D5EDA61B4EEC1111B606551738 (void);
// 0x0000020E System.Boolean HumanAttraction.AttractorRotator/<RotateAroundCO>d__12::MoveNext()
extern void U3CRotateAroundCOU3Ed__12_MoveNext_m49B47873C9995E0DA185C34F00E8907585470002 (void);
// 0x0000020F System.Object HumanAttraction.AttractorRotator/<RotateAroundCO>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRotateAroundCOU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m91918835C1DD81F6D4167F98CC126BB80689601C (void);
// 0x00000210 System.Void HumanAttraction.AttractorRotator/<RotateAroundCO>d__12::System.Collections.IEnumerator.Reset()
extern void U3CRotateAroundCOU3Ed__12_System_Collections_IEnumerator_Reset_m4D69B4769D3AACCD0040A083E6309114B24A183A (void);
// 0x00000211 System.Object HumanAttraction.AttractorRotator/<RotateAroundCO>d__12::System.Collections.IEnumerator.get_Current()
extern void U3CRotateAroundCOU3Ed__12_System_Collections_IEnumerator_get_Current_m65F646D4C780FA98EA2D5DC64C97553876F54EFB (void);
// 0x00000212 System.Single HumanAttraction.AttractorSideMover::get_XConstraints()
extern void AttractorSideMover_get_XConstraints_m8EC81A0E3FB8217894697EAD4C0316FD521899BF (void);
// 0x00000213 HumanAttraction.AttractorSideMover HumanAttraction.AttractorSideMover::get_Inst()
extern void AttractorSideMover_get_Inst_m12946F827E2BEFD8018EE52CB58D8C9572268440 (void);
// 0x00000214 System.Void HumanAttraction.AttractorSideMover::set_Inst(HumanAttraction.AttractorSideMover)
extern void AttractorSideMover_set_Inst_m7E6DC27D04A563C8C3527F17B2896F23FCD243E9 (void);
// 0x00000215 System.Void HumanAttraction.AttractorSideMover::Awake()
extern void AttractorSideMover_Awake_m51C58705FBE9C5C1E7EC304C5879E01B478DC715 (void);
// 0x00000216 System.Void HumanAttraction.AttractorSideMover::Start()
extern void AttractorSideMover_Start_m81A6EC8EE8ABC302BB76BDDF8634CE8DB35703D3 (void);
// 0x00000217 System.Void HumanAttraction.AttractorSideMover::Update()
extern void AttractorSideMover_Update_m8C7F1DA05FE189B3E36BEBD5BBACA0C93CEA1EC3 (void);
// 0x00000218 System.Void HumanAttraction.AttractorSideMover::MoveAttractionPoint()
extern void AttractorSideMover_MoveAttractionPoint_mEFA325F8E4D2ACAA2902C5D291C8A26E9B9B8E8C (void);
// 0x00000219 System.Single HumanAttraction.AttractorSideMover::SwipeInput()
extern void AttractorSideMover_SwipeInput_m6EA9A248F9466864AFA8C15939B88B5EE44C4028 (void);
// 0x0000021A System.Void HumanAttraction.AttractorSideMover::.ctor()
extern void AttractorSideMover__ctor_m5074918823FFA2F88B3A2D008344A2A52857BD5F (void);
// 0x0000021B System.Void HumanAttraction.AttractorSideMover::<Start>b__13_0()
extern void AttractorSideMover_U3CStartU3Eb__13_0_m4DFCA47CAFB5875EB9D979CDFE68496904B7C811 (void);
// 0x0000021C System.Void HumanAttraction.BoostersDeactivator::OnTriggerEnter(UnityEngine.Collider)
extern void BoostersDeactivator_OnTriggerEnter_mB6ECFDBF09422562CEA8A66DF3B62EF66C431F49 (void);
// 0x0000021D System.Void HumanAttraction.BoostersDeactivator::.ctor()
extern void BoostersDeactivator__ctor_mC0CC82C366BDDDD6789D2C630C8C4459A2F30F09 (void);
// 0x0000021E System.Void HumanAttraction.DecisionEmojiDisplay::Start()
extern void DecisionEmojiDisplay_Start_m96E4B6EB613EF09A0C34EDAE18F11CB5869AB12E (void);
// 0x0000021F System.Void HumanAttraction.DecisionEmojiDisplay::.ctor()
extern void DecisionEmojiDisplay__ctor_m96DAF07FEE26DB6B60F89123D9FE666356E13A4F (void);
// 0x00000220 System.Void HumanAttraction.DecisionEmojiDisplay::<Start>b__1_0()
extern void DecisionEmojiDisplay_U3CStartU3Eb__1_0_mA21A5E3F03B76DC72CE4869CCA6B210340B8FB50 (void);
// 0x00000221 System.Void HumanAttraction.HumansRotator::Start()
extern void HumansRotator_Start_m111BC48AC94CF2DD5E42CD30969931809B78372C (void);
// 0x00000222 System.Collections.IEnumerator HumanAttraction.HumansRotator::RotateHumansCO(System.Single,System.Single)
extern void HumansRotator_RotateHumansCO_m186590E1B00E19223BF88C7C5C36BF5EBFC6CF90 (void);
// 0x00000223 System.Void HumanAttraction.HumansRotator::.ctor()
extern void HumansRotator__ctor_m2D29439032D10D8D8B6DC293004F36637AE2E933 (void);
// 0x00000224 System.Void HumanAttraction.HumansRotator::<Start>b__2_0(System.Single,System.Single)
extern void HumansRotator_U3CStartU3Eb__2_0_m8698CBAECAC59C5481CAA31CA7E396CB540ED862 (void);
// 0x00000225 System.Void HumanAttraction.HumansRotator/<RotateHumansCO>d__3::.ctor(System.Int32)
extern void U3CRotateHumansCOU3Ed__3__ctor_m307842B7BB6BC29EFC7DF03B092BB9608BB37A79 (void);
// 0x00000226 System.Void HumanAttraction.HumansRotator/<RotateHumansCO>d__3::System.IDisposable.Dispose()
extern void U3CRotateHumansCOU3Ed__3_System_IDisposable_Dispose_m80DAF99B9B8E1E5A5B0A575DB7D0E53138069541 (void);
// 0x00000227 System.Boolean HumanAttraction.HumansRotator/<RotateHumansCO>d__3::MoveNext()
extern void U3CRotateHumansCOU3Ed__3_MoveNext_mC567533330C500278CDE56D727A273155758E45A (void);
// 0x00000228 System.Object HumanAttraction.HumansRotator/<RotateHumansCO>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRotateHumansCOU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2856ED2785CA040B5485141DE3355FD2B3C8EF50 (void);
// 0x00000229 System.Void HumanAttraction.HumansRotator/<RotateHumansCO>d__3::System.Collections.IEnumerator.Reset()
extern void U3CRotateHumansCOU3Ed__3_System_Collections_IEnumerator_Reset_m19DDA8E68ABDA47D39FCB1A3DAC8F395290C2A0F (void);
// 0x0000022A System.Object HumanAttraction.HumansRotator/<RotateHumansCO>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CRotateHumansCOU3Ed__3_System_Collections_IEnumerator_get_Current_mBC9082A8B1C7964A40422A1BE3A67EB863B5AE97 (void);
// 0x0000022B System.Void Human.HumanAnimationChanger::Awake()
extern void HumanAnimationChanger_Awake_m1B2FACA1B5D567C38F7921DB22B8357426ABA7ED (void);
// 0x0000022C System.Void Human.HumanAnimationChanger::Start()
extern void HumanAnimationChanger_Start_m72CA8841E88D20F888C215836243533C62F600D4 (void);
// 0x0000022D System.Void Human.HumanAnimationChanger::OnEnable()
extern void HumanAnimationChanger_OnEnable_mBF204AC369021E9DF197040F24AA274222A96AB1 (void);
// 0x0000022E System.Void Human.HumanAnimationChanger::Update()
extern void HumanAnimationChanger_Update_m7DAC418F9971C50ABE33C2E745BC8E174F153DEB (void);
// 0x0000022F System.Void Human.HumanAnimationChanger::SetVehicleAnim(Vehicles.VehicleTypes)
extern void HumanAnimationChanger_SetVehicleAnim_m8432113AAF6A751E902CBC1CD01F0CB3C118212D (void);
// 0x00000230 System.Void Human.HumanAnimationChanger::SetWalkAnimOffset()
extern void HumanAnimationChanger_SetWalkAnimOffset_m8325830041543B5EAC665A63BE40EFF107752AD5 (void);
// 0x00000231 System.Void Human.HumanAnimationChanger::ChangeAnimation()
extern void HumanAnimationChanger_ChangeAnimation_mE0011D458453F84AA38D7C4151FFBBBC1C96E3E6 (void);
// 0x00000232 System.Void Human.HumanAnimationChanger::.ctor()
extern void HumanAnimationChanger__ctor_m2B43AD6213CB7A432A12FDA86B9351F573B80AF0 (void);
// 0x00000233 System.Void Human.HumanAnimationChanger::<Start>b__7_0()
extern void HumanAnimationChanger_U3CStartU3Eb__7_0_m60202920F816F8450B422E0945AAB6F3F615A6E2 (void);
// 0x00000234 System.Void Human.HumanDrunkScaler::OnEnable()
extern void HumanDrunkScaler_OnEnable_m3E4880765FCE26B11B494694EB18742CB7E53DC2 (void);
// 0x00000235 System.Void Human.HumanDrunkScaler::Start()
extern void HumanDrunkScaler_Start_m9F6A72446CBA695E616EB425A2FD6F43A91A81DA (void);
// 0x00000236 System.Void Human.HumanDrunkScaler::ChangeDrunkScale(System.Int32)
extern void HumanDrunkScaler_ChangeDrunkScale_m40BED17051DC64A07E1AFCDD954477BF564691B8 (void);
// 0x00000237 System.Collections.IEnumerator Human.HumanDrunkScaler::ChangeBlendAmountCO(System.Single)
extern void HumanDrunkScaler_ChangeBlendAmountCO_m87E07D5BB255316921AE48D103B28DC30A459A76 (void);
// 0x00000238 System.Void Human.HumanDrunkScaler::.ctor()
extern void HumanDrunkScaler__ctor_mF7C13FB427FEBC3F9183E183E69D58A98E98A3FF (void);
// 0x00000239 System.Void Human.HumanDrunkScaler::.cctor()
extern void HumanDrunkScaler__cctor_m7BE17DE980E7A1D76AB29C9CD089AC0484C697A7 (void);
// 0x0000023A System.Void Human.HumanDrunkScaler::<Start>b__11_0(System.Int32,System.Int32)
extern void HumanDrunkScaler_U3CStartU3Eb__11_0_m2A521456F42081ED4F907FE4FDF214AA947160AC (void);
// 0x0000023B System.Void Human.HumanDrunkScaler/<ChangeBlendAmountCO>d__13::.ctor(System.Int32)
extern void U3CChangeBlendAmountCOU3Ed__13__ctor_m5E09769B750810854DC5FDDAD262249A3F229AD4 (void);
// 0x0000023C System.Void Human.HumanDrunkScaler/<ChangeBlendAmountCO>d__13::System.IDisposable.Dispose()
extern void U3CChangeBlendAmountCOU3Ed__13_System_IDisposable_Dispose_m6727C2BBC9AE8136D6547C4973A6BF9C38B06F55 (void);
// 0x0000023D System.Boolean Human.HumanDrunkScaler/<ChangeBlendAmountCO>d__13::MoveNext()
extern void U3CChangeBlendAmountCOU3Ed__13_MoveNext_m71E1106634CC894789EE8B8E398BCA90F9F645F9 (void);
// 0x0000023E System.Object Human.HumanDrunkScaler/<ChangeBlendAmountCO>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CChangeBlendAmountCOU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEB5FEDC50201D7064173A94C6E60206FDF756A3 (void);
// 0x0000023F System.Void Human.HumanDrunkScaler/<ChangeBlendAmountCO>d__13::System.Collections.IEnumerator.Reset()
extern void U3CChangeBlendAmountCOU3Ed__13_System_Collections_IEnumerator_Reset_m467590D6FDE33C1ACAB09493A6DC0D8669E61097 (void);
// 0x00000240 System.Object Human.HumanDrunkScaler/<ChangeBlendAmountCO>d__13::System.Collections.IEnumerator.get_Current()
extern void U3CChangeBlendAmountCOU3Ed__13_System_Collections_IEnumerator_get_Current_m5A6F3B2FAA454C12603E88A6B7142ACC9E493557 (void);
// 0x00000241 System.Void Human.HumanItemSetter::Start()
extern void HumanItemSetter_Start_m0CAC95A749764191EEF7EB8A1E49513659764917 (void);
// 0x00000242 System.Void Human.HumanItemSetter::.ctor()
extern void HumanItemSetter__ctor_mB5DEFA5E143AA99378AA9DD72AF50D136F464D45 (void);
// 0x00000243 System.Void Human.HumanItemSetter::<Start>b__3_0()
extern void HumanItemSetter_U3CStartU3Eb__3_0_mD0288A236A9619DDD60BBD6D2B219DA037EEEEDF (void);
// 0x00000244 System.Void Human.HumanMovement::RotateToTarget(UnityEngine.Vector3)
extern void HumanMovement_RotateToTarget_m7BD7C51D46ED481242A92984934F72E4776D976A (void);
// 0x00000245 System.Void Human.HumanMovement::Awake()
extern void HumanMovement_Awake_m7868B91475E9098262830E37C4F9B549DFAF9738 (void);
// 0x00000246 System.Void Human.HumanMovement::OnEnable()
extern void HumanMovement_OnEnable_mA188ADB0444B6471B2B1B10FB91F75BD9EAFF259 (void);
// 0x00000247 System.Void Human.HumanMovement::AddForceToTarget(UnityEngine.Vector3,System.Single)
extern void HumanMovement_AddForceToTarget_m7F73C02696A7892F236272CCC6ABDB713623CC83 (void);
// 0x00000248 System.Void Human.HumanMovement::MoveAway()
extern void HumanMovement_MoveAway_m76F7CFB42C81DE56C88D932F05D0176207ED3E61 (void);
// 0x00000249 System.Collections.IEnumerator Human.HumanMovement::MoveAwayCO()
extern void HumanMovement_MoveAwayCO_m52D652E86FB31B8170C674FD8EA3F940562762BC (void);
// 0x0000024A System.Collections.IEnumerator Human.HumanMovement::RotateToTargetCO(UnityEngine.Vector3)
extern void HumanMovement_RotateToTargetCO_mBD7AF80C96FEF12EECE31BF6ACF23FDA7C90B6DE (void);
// 0x0000024B System.Void Human.HumanMovement::.ctor()
extern void HumanMovement__ctor_m509DA19AD03160FB8D00D0008CF258DC06876D21 (void);
// 0x0000024C System.Void Human.HumanMovement/<MoveAwayCO>d__12::.ctor(System.Int32)
extern void U3CMoveAwayCOU3Ed__12__ctor_m49A20CCEAF998C3BED99861E3799867E5760D770 (void);
// 0x0000024D System.Void Human.HumanMovement/<MoveAwayCO>d__12::System.IDisposable.Dispose()
extern void U3CMoveAwayCOU3Ed__12_System_IDisposable_Dispose_mE06CDD9DAA132B2D7618D74A3FB046C81A505F7D (void);
// 0x0000024E System.Boolean Human.HumanMovement/<MoveAwayCO>d__12::MoveNext()
extern void U3CMoveAwayCOU3Ed__12_MoveNext_m77A61B0DC347AF8543CC8FC8EC96E3BAD44F1BBD (void);
// 0x0000024F System.Object Human.HumanMovement/<MoveAwayCO>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CMoveAwayCOU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A853900B3FEDD1E714FDCFFF66DF89B9582740A (void);
// 0x00000250 System.Void Human.HumanMovement/<MoveAwayCO>d__12::System.Collections.IEnumerator.Reset()
extern void U3CMoveAwayCOU3Ed__12_System_Collections_IEnumerator_Reset_mE6725EA11861EC7B577798DFD21011C09018C09A (void);
// 0x00000251 System.Object Human.HumanMovement/<MoveAwayCO>d__12::System.Collections.IEnumerator.get_Current()
extern void U3CMoveAwayCOU3Ed__12_System_Collections_IEnumerator_get_Current_m1F2065F279FFAF9D7978EE1A552E3E261AA8F643 (void);
// 0x00000252 System.Void Human.HumanMovement/<RotateToTargetCO>d__13::.ctor(System.Int32)
extern void U3CRotateToTargetCOU3Ed__13__ctor_mA59FBC9689A06EAC9BF16ACC7E5B916FD493AEBF (void);
// 0x00000253 System.Void Human.HumanMovement/<RotateToTargetCO>d__13::System.IDisposable.Dispose()
extern void U3CRotateToTargetCOU3Ed__13_System_IDisposable_Dispose_m1A653EBE0CFE54B369E81F936BC7044E4A4EFFC3 (void);
// 0x00000254 System.Boolean Human.HumanMovement/<RotateToTargetCO>d__13::MoveNext()
extern void U3CRotateToTargetCOU3Ed__13_MoveNext_m992A323752FB59A6E751187C786A00E3CA3373FC (void);
// 0x00000255 System.Object Human.HumanMovement/<RotateToTargetCO>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRotateToTargetCOU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m20B08BD3FEE757F907EF0DDD1F1AE6F8036966E2 (void);
// 0x00000256 System.Void Human.HumanMovement/<RotateToTargetCO>d__13::System.Collections.IEnumerator.Reset()
extern void U3CRotateToTargetCOU3Ed__13_System_Collections_IEnumerator_Reset_mCF175367FF8536618BFD3647A4A1A5F2FAD9428A (void);
// 0x00000257 System.Object Human.HumanMovement/<RotateToTargetCO>d__13::System.Collections.IEnumerator.get_Current()
extern void U3CRotateToTargetCOU3Ed__13_System_Collections_IEnumerator_get_Current_mB618BABECF468B44C2375613D0121B3B4CA1A3AD (void);
// 0x00000258 System.Void Human.HumanXPosClamper::Update()
extern void HumanXPosClamper_Update_mD3BE28541540F77359AEDD316F2722B54611C475 (void);
// 0x00000259 System.Void Human.HumanXPosClamper::.ctor()
extern void HumanXPosClamper__ctor_mB621BA2DBBD7DAECC71F1D3695A3D66558E4A1FD (void);
// 0x0000025A System.Void Finish.DecisionParticlesDisplay::Start()
extern void DecisionParticlesDisplay_Start_m9145390189BA022B3C49E56036DE3A315877686F (void);
// 0x0000025B System.Void Finish.DecisionParticlesDisplay::.ctor()
extern void DecisionParticlesDisplay__ctor_m2FD2C3EFE8A6985713D79AB06D2CDF2DE4275936 (void);
// 0x0000025C System.Void Finish.DecisionParticlesDisplay::<Start>b__2_0()
extern void DecisionParticlesDisplay_U3CStartU3Eb__2_0_m763904E6AE886D840305D271AF844EDF35D1F56A (void);
// 0x0000025D System.Void Finish.DecisionParticlesDisplay/<>c::.cctor()
extern void U3CU3Ec__cctor_m367E06021AFBD46106375E0D368D53E040DCB4E9 (void);
// 0x0000025E System.Void Finish.DecisionParticlesDisplay/<>c::.ctor()
extern void U3CU3Ec__ctor_mFBCFD7A6F57DCC841374B4BBDE31C5684615FD17 (void);
// 0x0000025F System.Void Finish.DecisionParticlesDisplay/<>c::<Start>b__2_1(UnityEngine.GameObject)
extern void U3CU3Ec_U3CStartU3Eb__2_1_mF6F512D75F26369DDC0F7DDDB7029B72CD9E9F28 (void);
// 0x00000260 System.Void Finish.DecisionParticlesDisplay/<>c::<Start>b__2_2(UnityEngine.GameObject)
extern void U3CU3Ec_U3CStartU3Eb__2_2_mD430BAF14C73CC7606BB86DB21ABFC719AB76F05 (void);
// 0x00000261 System.Void Finish.FinishLine::ResetTime()
extern void FinishLine_ResetTime_mFC12376EB00301CAB194C56060E26EEDD5F909EF (void);
// 0x00000262 System.Void Finish.FinishLine::Start()
extern void FinishLine_Start_mB2CB07D865515EE411A2B67474E29A4ABBEC64BB (void);
// 0x00000263 System.Void Finish.FinishLine::IncrementTime()
extern void FinishLine_IncrementTime_m745B8875B81C31E72978A65F37F6CDFC7A522C8A (void);
// 0x00000264 System.Void Finish.FinishLine::OnTriggerEnter(UnityEngine.Collider)
extern void FinishLine_OnTriggerEnter_m339034A6E92DE0E1F071E38F3DC2CCA35E927D04 (void);
// 0x00000265 System.Void Finish.FinishLine::.ctor()
extern void FinishLine__ctor_m5BEFFE7AAC5C51EA09CC18895D77842DB22A3372 (void);
// 0x00000266 System.Void Finish.FinishLine::.cctor()
extern void FinishLine__cctor_m6EA6D972DFED009534FC466B282A8791C901BBD5 (void);
// 0x00000267 Core.Gender Core.Gender::get_Inst()
extern void Gender_get_Inst_m30E43499377E373C496FE6DDC255D2257F0D2BEE (void);
// 0x00000268 System.Void Core.Gender::set_Inst(Core.Gender)
extern void Gender_set_Inst_m8A5F027F570C9596CC5E82685CC6276656146D34 (void);
// 0x00000269 System.Void Core.Gender::Awake()
extern void Gender_Awake_mCF843D204C416B24CABE39FCE19F81A3C71413AF (void);
// 0x0000026A System.String Core.Gender::GetTag(Core.GenderType)
extern void Gender_GetTag_mF28040D9FF05E2094CD8A10163DC787FEB58E5B4 (void);
// 0x0000026B UnityEngine.GameObject Core.Gender::GetPrefab(Core.GenderType)
extern void Gender_GetPrefab_mBFCFDC433E5169DC03B86CECEF962B1E6D4CF8F6 (void);
// 0x0000026C System.Void Core.Gender::.ctor()
extern void Gender__ctor_m94D3B7BD7C515DD2D1DF811859C57893F0730ADF (void);
// 0x0000026D System.Void Core.Literals::.cctor()
extern void Literals__cctor_m64B6BC23A53CB45AEDD11E7C4E9A83C9674E1D16 (void);
// 0x0000026E System.Void CinemachineCam.CameraFinishAnimationPlayer::Start()
extern void CameraFinishAnimationPlayer_Start_m7324C9D0A92CE5C76148858942AC0BE24B33B871 (void);
// 0x0000026F System.Void CinemachineCam.CameraFinishAnimationPlayer::.ctor()
extern void CameraFinishAnimationPlayer__ctor_m1DAC6F4FBD89551DEE6BBC5DA3F51B253F6201B0 (void);
// 0x00000270 System.Void CinemachineCam.CameraFinishAnimationPlayer::<Start>b__2_0()
extern void CameraFinishAnimationPlayer_U3CStartU3Eb__2_0_m70A038E8859A381B328D0DDB0B51499BC25D3137 (void);
// 0x00000271 System.Void CanvasGraphics.EndCanvas::OnClickNextLevel()
extern void EndCanvas_OnClickNextLevel_m2FB822729A94A20782DE25C009862038D5B73157 (void);
// 0x00000272 System.Void CanvasGraphics.EndCanvas::Start()
extern void EndCanvas_Start_m20B4A2AED8D60489335B633CB029E9570D6B3677 (void);
// 0x00000273 System.Void CanvasGraphics.EndCanvas::ShowEndCanvasDelayed()
extern void EndCanvas_ShowEndCanvasDelayed_m1E8C9B4C6BB4B6B85B099473443AF07B200969C6 (void);
// 0x00000274 System.Void CanvasGraphics.EndCanvas::.ctor()
extern void EndCanvas__ctor_mE03FD4C61D5DE25CAB7E100F9D4768120CCA9AC3 (void);
// 0x00000275 System.Void CanvasGraphics.EndCanvas::<Start>b__4_0()
extern void EndCanvas_U3CStartU3Eb__4_0_m514D63BB14F05AB7A4D0388ABB18E3FFFDC35799 (void);
// 0x00000276 System.Void CanvasGraphics.LevelLabelSetter::Start()
extern void LevelLabelSetter_Start_mF8C5FE5FDF6BC47D4DBC56B04A7E2040309AC1A9 (void);
// 0x00000277 System.Void CanvasGraphics.LevelLabelSetter::.ctor()
extern void LevelLabelSetter__ctor_mA78CFC71C6FD9BF1452A4EE998CABDC20F5E3248 (void);
// 0x00000278 System.Void CanvasGraphics.Score.HumanChangeDisplay::Start()
extern void HumanChangeDisplay_Start_m5A4880E55A247DD7E7039F770DB4114A7356C24E (void);
// 0x00000279 System.Void CanvasGraphics.Score.HumanChangeDisplay::ShowInfo(SnackersUI.TweenAnimatedUIElement,TMPro.TextMeshProUGUI,System.String,UnityEngine.Color)
extern void HumanChangeDisplay_ShowInfo_m68A596A50278BCCCC82804EF2A52D0554B9810E0 (void);
// 0x0000027A System.Collections.IEnumerator CanvasGraphics.Score.HumanChangeDisplay::DelayedHideCO(SnackersUI.TweenAnimatedUIElement)
extern void HumanChangeDisplay_DelayedHideCO_m0760805DC23A32962ACA41EE037461E6C0D17EC3 (void);
// 0x0000027B System.Void CanvasGraphics.Score.HumanChangeDisplay::.ctor()
extern void HumanChangeDisplay__ctor_mEDC469193E67EAF4FCF9C1AB66E9F85A97439874 (void);
// 0x0000027C System.Void CanvasGraphics.Score.HumanChangeDisplay::<Start>b__7_0(UnityEngine.GameObject)
extern void HumanChangeDisplay_U3CStartU3Eb__7_0_mE0613DE139DF91ACBEF97F293ECE229F6E4A6BB5 (void);
// 0x0000027D System.Void CanvasGraphics.Score.HumanChangeDisplay::<Start>b__7_1(UnityEngine.GameObject)
extern void HumanChangeDisplay_U3CStartU3Eb__7_1_m9159909BEBD82CD42A8E585FEB3A65CEC5844F83 (void);
// 0x0000027E System.Void CanvasGraphics.Score.HumanChangeDisplay/<DelayedHideCO>d__9::.ctor(System.Int32)
extern void U3CDelayedHideCOU3Ed__9__ctor_m3F7F3BCAD6A6F5F8F08D1996154A844F1DEC956A (void);
// 0x0000027F System.Void CanvasGraphics.Score.HumanChangeDisplay/<DelayedHideCO>d__9::System.IDisposable.Dispose()
extern void U3CDelayedHideCOU3Ed__9_System_IDisposable_Dispose_mEA4B857D35276FFED245D1AF10AD4510471B5541 (void);
// 0x00000280 System.Boolean CanvasGraphics.Score.HumanChangeDisplay/<DelayedHideCO>d__9::MoveNext()
extern void U3CDelayedHideCOU3Ed__9_MoveNext_m07D160D5A2EA3ED5162E09BFF3BE1958E3C7418B (void);
// 0x00000281 System.Object CanvasGraphics.Score.HumanChangeDisplay/<DelayedHideCO>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDelayedHideCOU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52BF89F42463046E01904973D0F889E4F323711A (void);
// 0x00000282 System.Void CanvasGraphics.Score.HumanChangeDisplay/<DelayedHideCO>d__9::System.Collections.IEnumerator.Reset()
extern void U3CDelayedHideCOU3Ed__9_System_Collections_IEnumerator_Reset_mD37BE559FF61231171A2DFFEDDB15832362A73C6 (void);
// 0x00000283 System.Object CanvasGraphics.Score.HumanChangeDisplay/<DelayedHideCO>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CDelayedHideCOU3Ed__9_System_Collections_IEnumerator_get_Current_mAB0F1828753CDC3F8590F6205AB24E09678A0CEF (void);
// 0x00000284 System.Void CanvasGraphics.Score.ProgressStage::.ctor()
extern void ProgressStage__ctor_mB0F13BEC19C8C698897579169896D8346D417A26 (void);
// 0x00000285 CanvasGraphics.Score.ScoreChanger CanvasGraphics.Score.ScoreChanger::get_Inst()
extern void ScoreChanger_get_Inst_m0048D18120047BE782737DA39E793E213C655FF7 (void);
// 0x00000286 System.Void CanvasGraphics.Score.ScoreChanger::set_Inst(CanvasGraphics.Score.ScoreChanger)
extern void ScoreChanger_set_Inst_mAA0340F9682C52885920C4E9B720328B9C9548D6 (void);
// 0x00000287 System.Int32 CanvasGraphics.Score.ScoreChanger::get_StartScore()
extern void ScoreChanger_get_StartScore_mF27D5417A8E3ED1A6CD80E13B9375BCD67227A2C (void);
// 0x00000288 System.Int32 CanvasGraphics.Score.ScoreChanger::get_MaxScore()
extern void ScoreChanger_get_MaxScore_m405184D1C4B2E9141D0505AC2D22075FE02FDE9C (void);
// 0x00000289 System.Int32 CanvasGraphics.Score.ScoreChanger::get_MaxHumans()
extern void ScoreChanger_get_MaxHumans_mE001F5390ABB6612F03AC272D208F1BBA5235F86 (void);
// 0x0000028A System.Int32 CanvasGraphics.Score.ScoreChanger::get_CurrentScore()
extern void ScoreChanger_get_CurrentScore_m29CFD76A479FE7761FAD6D6147772BCC6F6EA37B (void);
// 0x0000028B System.Int32 CanvasGraphics.Score.ScoreChanger::get_HumanCount()
extern void ScoreChanger_get_HumanCount_m565F55EB33DA591DDAC85BE6EDA4F2E4C4E7B212 (void);
// 0x0000028C System.Void CanvasGraphics.Score.ScoreChanger::Awake()
extern void ScoreChanger_Awake_m909DEA9219D616EA4F884E7921E6CB158534599F (void);
// 0x0000028D System.Void CanvasGraphics.Score.ScoreChanger::Start()
extern void ScoreChanger_Start_mA3336F8FB5C27CA2CE209690A80522E7C2FF2B06 (void);
// 0x0000028E System.Void CanvasGraphics.Score.ScoreChanger::ChangeScore(Core.GenderType,System.Int32)
extern void ScoreChanger_ChangeScore_mEC2B6355941D07459A29455C9729ED64CC697D78 (void);
// 0x0000028F System.Void CanvasGraphics.Score.ScoreChanger::CheckForSpawn(System.Int32)
extern void ScoreChanger_CheckForSpawn_m58636542070E46E212A81649ECF7B21E5061BD6F (void);
// 0x00000290 System.Void CanvasGraphics.Score.ScoreChanger::.ctor()
extern void ScoreChanger__ctor_m6C7A753121C5B946B0B6777E3C470C93A8D6E709 (void);
// 0x00000291 System.Void CanvasGraphics.Score.ScoreChanger::.cctor()
extern void ScoreChanger__cctor_m88780B74FBAFC8BFEF79C9EE9D6743ECE60A088D (void);
// 0x00000292 System.Void CanvasGraphics.Score.ScoreDisplay::Start()
extern void ScoreDisplay_Start_m8B936925806D7C6828853E4EC7BD83F74EFBF63E (void);
// 0x00000293 System.Void CanvasGraphics.Score.ScoreDisplay::SpawnLines()
extern void ScoreDisplay_SpawnLines_mB8035F2268688B33CC31E5D05B0D5275695C1E93 (void);
// 0x00000294 System.Void CanvasGraphics.Score.ScoreDisplay::UpdateVisuals(System.Int32,System.Int32)
extern void ScoreDisplay_UpdateVisuals_m2B4BC056F4DDD15D2BCF07C0CB8A35FDCF47F533 (void);
// 0x00000295 CanvasGraphics.Score.ProgressStage CanvasGraphics.Score.ScoreDisplay::GetCurrentStage(System.Int32)
extern void ScoreDisplay_GetCurrentStage_m44B5A984892BE614E8C081F9D8F2C31AAFB4EA92 (void);
// 0x00000296 System.Collections.IEnumerator CanvasGraphics.Score.ScoreDisplay::UpdateBarCO(System.Int32)
extern void ScoreDisplay_UpdateBarCO_m3DFF97617B0F1780C78E954206B1DDDD5E32A275 (void);
// 0x00000297 System.Void CanvasGraphics.Score.ScoreDisplay::.ctor()
extern void ScoreDisplay__ctor_m4B8577AE2FCD91D37520A768E9E6D7D74C6C4966 (void);
// 0x00000298 System.Void CanvasGraphics.Score.ScoreDisplay::<Start>b__13_0()
extern void ScoreDisplay_U3CStartU3Eb__13_0_m460A8B74886C1CB2B8BF7923D4C333C98C2DD655 (void);
// 0x00000299 System.Void CanvasGraphics.Score.ScoreDisplay/<UpdateBarCO>d__17::.ctor(System.Int32)
extern void U3CUpdateBarCOU3Ed__17__ctor_m7D296A5C4AAC9D665B1115D4241D6E3A9D7A665E (void);
// 0x0000029A System.Void CanvasGraphics.Score.ScoreDisplay/<UpdateBarCO>d__17::System.IDisposable.Dispose()
extern void U3CUpdateBarCOU3Ed__17_System_IDisposable_Dispose_m08AB083A2CC058A563A6B690093EC1CB3B568280 (void);
// 0x0000029B System.Boolean CanvasGraphics.Score.ScoreDisplay/<UpdateBarCO>d__17::MoveNext()
extern void U3CUpdateBarCOU3Ed__17_MoveNext_m7A1833D61D83C22B7F332718971E2B1923B4E01E (void);
// 0x0000029C System.Object CanvasGraphics.Score.ScoreDisplay/<UpdateBarCO>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CUpdateBarCOU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8772C89919EF7032F56CACC9DD2DF8E393D5B951 (void);
// 0x0000029D System.Void CanvasGraphics.Score.ScoreDisplay/<UpdateBarCO>d__17::System.Collections.IEnumerator.Reset()
extern void U3CUpdateBarCOU3Ed__17_System_Collections_IEnumerator_Reset_m69B11C198453AAFEEED8623052E8040C7FE824E6 (void);
// 0x0000029E System.Object CanvasGraphics.Score.ScoreDisplay/<UpdateBarCO>d__17::System.Collections.IEnumerator.get_Current()
extern void U3CUpdateBarCOU3Ed__17_System_Collections_IEnumerator_get_Current_mD72D7EB2A4C485AC1D227522D1C23D3906F60EBF (void);
// 0x0000029F System.Void CanvasGraphics.Score.ScorePlacer::Start()
extern void ScorePlacer_Start_m9D167CD5B813B0282AD4C7396B27058559C339FC (void);
// 0x000002A0 System.Void CanvasGraphics.Score.ScorePlacer::LateUpdate()
extern void ScorePlacer_LateUpdate_m9C6433E0FB31166F6EEDDEB8E3B4BCB2ED676A44 (void);
// 0x000002A1 System.Void CanvasGraphics.Score.ScorePlacer::.ctor()
extern void ScorePlacer__ctor_m271999733D36C60F2AA5446505ED520EA5F2FFA5 (void);
// 0x000002A2 CanvasGraphics.HumanBar.HumanBarCanvas CanvasGraphics.HumanBar.HumanBarCanvas::get_Inst()
extern void HumanBarCanvas_get_Inst_m29BE40EAED5B02B05C8B734DDD5A8EB6F92E4072 (void);
// 0x000002A3 System.Void CanvasGraphics.HumanBar.HumanBarCanvas::set_Inst(CanvasGraphics.HumanBar.HumanBarCanvas)
extern void HumanBarCanvas_set_Inst_m8558951CD5BF2CECFD8B54F3F7D3A4843C217925 (void);
// 0x000002A4 System.Int32 CanvasGraphics.HumanBar.HumanBarCanvas::get_MaxScore()
extern void HumanBarCanvas_get_MaxScore_m9D30FFC5E87C493ECA42136C61FE0C6ED39EEEC8 (void);
// 0x000002A5 System.Collections.Generic.List`1<System.Int32> CanvasGraphics.HumanBar.HumanBarCanvas::get_NextIdToUnlock()
extern void HumanBarCanvas_get_NextIdToUnlock_mD5CDDFEDD87DABC429450048ED9DCA0B6D0F690A (void);
// 0x000002A6 System.Collections.Generic.List`1<CanvasGraphics.HumanBar.ItemForHumans> CanvasGraphics.HumanBar.HumanBarCanvas::get_Items()
extern void HumanBarCanvas_get_Items_mED9B9E8777E430475CB358580E9E2A4FBB4160F1 (void);
// 0x000002A7 Vehicles.Vehicle CanvasGraphics.HumanBar.HumanBarCanvas::GetCurrentItem()
extern void HumanBarCanvas_GetCurrentItem_m71AC044C1C52A34EC3918B3F363060CCAD0D2BEA (void);
// 0x000002A8 System.Void CanvasGraphics.HumanBar.HumanBarCanvas::Awake()
extern void HumanBarCanvas_Awake_m65180621DD05F14AC5F568D6147625D8F80ED560 (void);
// 0x000002A9 System.Void CanvasGraphics.HumanBar.HumanBarCanvas::Start()
extern void HumanBarCanvas_Start_m0BE6620AD10441069810785477CC836B4FF5747F (void);
// 0x000002AA System.Void CanvasGraphics.HumanBar.HumanBarCanvas::PlayBarAnimaiton()
extern void HumanBarCanvas_PlayBarAnimaiton_mDF9D9B845B0600EA4AE307E8D3F31C7D7F47B515 (void);
// 0x000002AB System.Void CanvasGraphics.HumanBar.HumanBarCanvas::DelayHideCount()
extern void HumanBarCanvas_DelayHideCount_mE43AC72A20AAE287F88584BE64C4DE274DD6CFD7 (void);
// 0x000002AC System.Void CanvasGraphics.HumanBar.HumanBarCanvas::AddNextIdsToList(Saves.ItemScore)
extern void HumanBarCanvas_AddNextIdsToList_mCC9FAA0AAF8C5C59AC44EBEFBE50065BA88B80B3 (void);
// 0x000002AD System.Void CanvasGraphics.HumanBar.HumanBarCanvas::UpdateItem(Core.GenderType,Saves.ItemScore,System.Int32)
extern void HumanBarCanvas_UpdateItem_mA3E590A74212ED4D5280905105CB20DA66136F97 (void);
// 0x000002AE System.Collections.IEnumerator CanvasGraphics.HumanBar.HumanBarCanvas::ChangeFillAmountCO(UnityEngine.UI.Image,System.Int32)
extern void HumanBarCanvas_ChangeFillAmountCO_mCBA182A2B698B2C4CE24E59CB1A70B26CB174BA7 (void);
// 0x000002AF System.Void CanvasGraphics.HumanBar.HumanBarCanvas::.ctor()
extern void HumanBarCanvas__ctor_mF251419CB707EE5A478E59CD8E00D46B84462053 (void);
// 0x000002B0 System.Void CanvasGraphics.HumanBar.HumanBarCanvas::.cctor()
extern void HumanBarCanvas__cctor_m758119BA7713D4CE86682FCBABBE9DC158517FB6 (void);
// 0x000002B1 System.Void CanvasGraphics.HumanBar.HumanBarCanvas/<>c::.cctor()
extern void U3CU3Ec__cctor_m7D34EE402919C5AF3F346056C7DE7364D425AA80 (void);
// 0x000002B2 System.Void CanvasGraphics.HumanBar.HumanBarCanvas/<>c::.ctor()
extern void U3CU3Ec__ctor_m170ED8C3A32511A1BFB3312E919CD6EF6EBAD17A (void);
// 0x000002B3 System.Int32 CanvasGraphics.HumanBar.HumanBarCanvas/<>c::<UpdateItem>b__33_0(CanvasGraphics.HumanBar.ItemForHumans)
extern void U3CU3Ec_U3CUpdateItemU3Eb__33_0_m7244FE5CB23B8D657D8E72DF734DA5C1922E6A87 (void);
// 0x000002B4 System.Void CanvasGraphics.HumanBar.HumanBarCanvas/<ChangeFillAmountCO>d__34::.ctor(System.Int32)
extern void U3CChangeFillAmountCOU3Ed__34__ctor_m213907A9171CA62CF79C5D07BE5EEDB29A6F4279 (void);
// 0x000002B5 System.Void CanvasGraphics.HumanBar.HumanBarCanvas/<ChangeFillAmountCO>d__34::System.IDisposable.Dispose()
extern void U3CChangeFillAmountCOU3Ed__34_System_IDisposable_Dispose_mD682971D6BB177950939A686F56330060C1EC833 (void);
// 0x000002B6 System.Boolean CanvasGraphics.HumanBar.HumanBarCanvas/<ChangeFillAmountCO>d__34::MoveNext()
extern void U3CChangeFillAmountCOU3Ed__34_MoveNext_mCC40C74B3B429FF636F1000A49DA818A4CFC04C9 (void);
// 0x000002B7 System.Object CanvasGraphics.HumanBar.HumanBarCanvas/<ChangeFillAmountCO>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CChangeFillAmountCOU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEAE78B612CA509788CD3FD6BF5663418FC2AC022 (void);
// 0x000002B8 System.Void CanvasGraphics.HumanBar.HumanBarCanvas/<ChangeFillAmountCO>d__34::System.Collections.IEnumerator.Reset()
extern void U3CChangeFillAmountCOU3Ed__34_System_Collections_IEnumerator_Reset_mDF1798840E95D844EF641DF5D1872139748D579C (void);
// 0x000002B9 System.Object CanvasGraphics.HumanBar.HumanBarCanvas/<ChangeFillAmountCO>d__34::System.Collections.IEnumerator.get_Current()
extern void U3CChangeFillAmountCOU3Ed__34_System_Collections_IEnumerator_get_Current_m2C90EAB666BBEBA7A46CB0021F27AB5ED2759AF7 (void);
// 0x000002BA CanvasGraphics.HumanBar.HumanBarItemDisplay CanvasGraphics.HumanBar.HumanBarItemDisplay::get_Inst()
extern void HumanBarItemDisplay_get_Inst_m6A75DB819D410B93BA5648966DB0A3A5C966DBF4 (void);
// 0x000002BB System.Void CanvasGraphics.HumanBar.HumanBarItemDisplay::set_Inst(CanvasGraphics.HumanBar.HumanBarItemDisplay)
extern void HumanBarItemDisplay_set_Inst_mD78C0E6F96EB25D9F5E3A34CC323268AEAEA8AA6 (void);
// 0x000002BC System.Void CanvasGraphics.HumanBar.HumanBarItemDisplay::Awake()
extern void HumanBarItemDisplay_Awake_m0395B8EC6FF91CE2F1C7A96B15D3AB0FF25A84BE (void);
// 0x000002BD System.Void CanvasGraphics.HumanBar.HumanBarItemDisplay::SetUpIcons(Saves.ItemScore)
extern void HumanBarItemDisplay_SetUpIcons_mC894F28A15DF19692E07A3D3286B5F492A030166 (void);
// 0x000002BE UnityEngine.UI.Image CanvasGraphics.HumanBar.HumanBarItemDisplay::SpawnImage(UnityEngine.UI.Image,UnityEngine.Transform,System.Int32)
extern void HumanBarItemDisplay_SpawnImage_m7811A5BE8CABAA6F736E0A33F24260D39356BEDE (void);
// 0x000002BF System.Void CanvasGraphics.HumanBar.HumanBarItemDisplay::.ctor()
extern void HumanBarItemDisplay__ctor_m372C8221F6EFDE1050C9F052FD9DD19C4B35BDAB (void);
// 0x000002C0 System.Void CanvasGraphics.HumanBar.HumanCountDisplay::Start()
extern void HumanCountDisplay_Start_m4B004F9810A7B4CDFCAD6E21DB3CBC929CE994A1 (void);
// 0x000002C1 System.Void CanvasGraphics.HumanBar.HumanCountDisplay::.ctor()
extern void HumanCountDisplay__ctor_m27FA18031F95747AB4A85501975AE8AFBC18D24B (void);
// 0x000002C2 System.Void CanvasGraphics.HumanBar.HumanCountDisplay::<Start>b__6_0()
extern void HumanCountDisplay_U3CStartU3Eb__6_0_mA72B41CD8D237D42622DDCDB4D08C77D051893CA (void);
// 0x000002C3 System.Void CanvasGraphics.HumanBar.ItemForHumans::.ctor()
extern void ItemForHumans__ctor_m03E16B2480DBF108887605088A68683397F70C45 (void);
// 0x000002C4 System.Void CanvasGraphics.HumanBar.ItemUnlockDisplay::Start()
extern void ItemUnlockDisplay_Start_mA40B182EBA1E6AC3FD9B0470C0C695F4111B3034 (void);
// 0x000002C5 System.Void CanvasGraphics.HumanBar.ItemUnlockDisplay::PlayDisplayAnim(UnityEngine.Sprite)
extern void ItemUnlockDisplay_PlayDisplayAnim_m22E81DD054C8B67A8A59075234E3F6ED32CA0484 (void);
// 0x000002C6 System.Void CanvasGraphics.HumanBar.ItemUnlockDisplay::.ctor()
extern void ItemUnlockDisplay__ctor_mB83B906EBB8C4DD34FA3CAAA4C60AF4BF8D93F13 (void);
// 0x000002C7 System.Void Boosters.BaseScoreBooster::OnTriggerEnter(UnityEngine.Collider)
extern void BaseScoreBooster_OnTriggerEnter_mBCCD41238F5C9A46E462DDF34BDD4C81C9DDB0DD (void);
// 0x000002C8 System.Void Boosters.BaseScoreBooster::.ctor()
extern void BaseScoreBooster__ctor_m19C7E5FD9FF5802C72EB848E245CB61D845AC1EB (void);
// 0x000002C9 System.Void Boosters.BaseScoreBooster::.cctor()
extern void BaseScoreBooster__cctor_m8C5669F0BC5E734DE95428B3B17BA0724F91A106 (void);
// 0x000002CA System.Void Boosters.Gate::OnTriggerEnter(UnityEngine.Collider)
extern void Gate_OnTriggerEnter_mB4262C62D32F2AA4E0B00F88CFF4A50E9D0D75FE (void);
// 0x000002CB System.Void Boosters.Gate::.ctor()
extern void Gate__ctor_m185F7D6B0BFD193C9CFDC5911D29CB17BBA9B612 (void);
// 0x000002CC System.Void Boosters.Item::OnTriggerEnter(UnityEngine.Collider)
extern void Item_OnTriggerEnter_mA7AA890F4E9872C794703C07868A001258E23128 (void);
// 0x000002CD System.Void Boosters.Item::.ctor()
extern void Item__ctor_mBDD4B4FC0FDA13E46D7DF191BBE29D69F7A450B8 (void);
// 0x000002CE System.Void NG.KeyPressExample::Reset()
extern void KeyPressExample_Reset_m6C0693C17C679DAE8C7E095035DF39A97506B4BE (void);
// 0x000002CF System.Void NG.KeyPressExample::Update()
extern void KeyPressExample_Update_mDEFEBF8B9FC6B2472881B72AAEE2B1DBF4B7E00C (void);
// 0x000002D0 System.Void NG.KeyPressExample::.ctor()
extern void KeyPressExample__ctor_mB49C401CC6085A1AE05FCA3F3842637A764C8F06 (void);
// 0x000002D1 System.Void NG.SSH_IntVector2::.ctor(System.Int32,System.Int32)
extern void SSH_IntVector2__ctor_m6DCAB9DF4EFE06D52F266D0F7F414EE1EB4AED87 (void);
// 0x000002D2 System.Void NG.ShotSize::.ctor()
extern void ShotSize__ctor_m551AD9DD799A76C11C535275B87813BF7B57A6EF (void);
// 0x000002D3 System.Void NG.ShotSize::.ctor(System.Int32,System.Int32)
extern void ShotSize__ctor_mC56B5336C1E5F0F6DD88C636B9E04520FADE9A49 (void);
// 0x000002D4 System.String NG.ShotSize::ToString()
extern void ShotSize_ToString_mA7F731024E2CC795C8C89611606ABAFA4F730B77 (void);
// 0x000002D5 System.String NG.ShotSize::GetFileNameBase()
extern void ShotSize_GetFileNameBase_m597683DC4D1AEE6C479EB57AEC6EDABE8194F12A (void);
// 0x000002D6 System.Boolean NG.ShotSizeComparer::Equals(NG.ShotSize,NG.ShotSize)
extern void ShotSizeComparer_Equals_mADC5B38AE3C386D6E7A4FBCA9D45E505AA295B8D (void);
// 0x000002D7 System.Int32 NG.ShotSizeComparer::GetHashCode(NG.ShotSize)
extern void ShotSizeComparer_GetHashCode_m3FA42E471B3EAE6E459056254DD75F3ED6A6122D (void);
// 0x000002D8 System.Void NG.ShotSizeComparer::.ctor()
extern void ShotSizeComparer__ctor_m525F8F739EAE2E01D7634D8EB0A8E0A2F0AB3B80 (void);
// 0x000002D9 System.Void NG.SSHDebug::Log(System.String)
extern void SSHDebug_Log_mAE54F2D6652EFC7A1F13535C922D38E945F857B9 (void);
// 0x000002DA System.Void NG.SSHDebug::LogWarning(System.String)
extern void SSHDebug_LogWarning_m99B9DCE19469392B3D0A84D74EA29725C5323E08 (void);
// 0x000002DB System.Void NG.SSHDebug::LogError(System.String)
extern void SSHDebug_LogError_mA019C5D4FDD870156678072DD99EB9F7D603C66A (void);
// 0x000002DC System.Void NG.SSHDebug::.ctor()
extern void SSHDebug__ctor_mEB48F736E60357572C91FE8BF15075E3DE74ABD8 (void);
// 0x000002DD System.Void NG.SSHDebug::.cctor()
extern void SSHDebug__cctor_m639F542C618676E3595A3EECC65B94376A22F58A (void);
// 0x000002DE System.Void NG.SSHPreset::Save(NG.ScreenshotHelper)
extern void SSHPreset_Save_mDDA5115797D54616F19F40E4BC4733012054549D (void);
// 0x000002DF System.Void NG.SSHPreset::Save(System.String,NG.ScreenshotHelper)
extern void SSHPreset_Save_mFAF4FF7039DC05EE687654D18A341DDDBC034796 (void);
// 0x000002E0 NG.SSHPreset NG.SSHPreset::Load(System.String)
extern void SSHPreset_Load_mF42FAD276F2AE141DF9B9B0632C2CBBDB4C97629 (void);
// 0x000002E1 System.String NG.SSHPreset::DefaultSavePath()
extern void SSHPreset_DefaultSavePath_m33744671093A2D1F6D4AB7CFC9CDDB25682141EC (void);
// 0x000002E2 System.Void NG.SSHPreset::.ctor()
extern void SSHPreset__ctor_m5B8FB66873C55ADF86039D0F84A66061EB6541E1 (void);
// 0x000002E3 UnityEngine.Texture2D NG.SSHUtil::CombineCamerasNonThreaded(UnityEngine.Camera[],NG.ShotSize,UnityEngine.TextureFormat,System.Int32)
extern void SSHUtil_CombineCamerasNonThreaded_m7DBF23703546512DDE58EC6206FB3BB75102312B (void);
// 0x000002E4 UnityEngine.Texture2D NG.SSHUtil::Combine(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern void SSHUtil_Combine_m97692ED8090BD0588D2B6B7A8E143C529CA35023 (void);
// 0x000002E5 System.Void NG.SSHUtil::CombineTexturesThread(System.Collections.Generic.List`1<UnityEngine.Color[]>,System.Action`1<UnityEngine.Color[]>)
extern void SSHUtil_CombineTexturesThread_mE8C32C4569E939FC853FEC64358C15B13EF0F5DD (void);
// 0x000002E6 UnityEngine.Color[] NG.SSHUtil::CombineColorArray(UnityEngine.Color[],UnityEngine.Color[])
extern void SSHUtil_CombineColorArray_m5FB80CE22F1C0017CDE720CA40E386F33CE48A48 (void);
// 0x000002E7 System.Collections.Generic.List`1<UnityEngine.Color[]> NG.SSHUtil::GetCameraTexturesColors(UnityEngine.Camera[],NG.ShotSize,UnityEngine.TextureFormat,System.Int32)
extern void SSHUtil_GetCameraTexturesColors_m00C930915E64AFCBB3667DEAB78AF42DEFB55751 (void);
// 0x000002E8 System.Void NG.SSHUtil::SaveTexture(UnityEngine.Texture2D,System.String,System.String)
extern void SSHUtil_SaveTexture_m800AF1EA151D6A11182CFBDDE7710145180E255B (void);
// 0x000002E9 UnityEngine.Texture2D NG.SSHUtil::GetScreenBilinearScaling(UnityEngine.TextureFormat,NG.ShotSize)
extern void SSHUtil_GetScreenBilinearScaling_m45B634C4DEA535CB75C856F1E73121DB49F23C88 (void);
// 0x000002EA System.Void NG.SSHUtil::.ctor()
extern void SSHUtil__ctor_m709257872CEFC7FFAE56C0A894F1A20B8905D91B (void);
// 0x000002EB System.Void NG.SSHUtil/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mECEE7F0F93F1E99B5F3079A1BA3AB3A4C3643A3D (void);
// 0x000002EC System.Void NG.SSHUtil/<>c__DisplayClass2_0::<CombineTexturesThread>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CCombineTexturesThreadU3Eb__0_mAE24C3075C7F2FD33EF5332B7883D3E3D4223DA8 (void);
// 0x000002ED System.Void NG.TextureScale::Point(UnityEngine.Texture2D,System.Int32,System.Int32)
extern void TextureScale_Point_m37B707D7E31C93026C7FAD70AE8FE2BA6914D9A7 (void);
// 0x000002EE System.Void NG.TextureScale::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
extern void TextureScale_Bilinear_mBE367801FDE367F8065380867D721CFC411C6845 (void);
// 0x000002EF System.Void NG.TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
extern void TextureScale_ThreadedScale_m1442D66B9D639AA806A1AD84BCF88B678E2315AD (void);
// 0x000002F0 System.Void NG.TextureScale::BilinearScale(System.Object)
extern void TextureScale_BilinearScale_mF5F013C6FE2F9CA584C3DDC10A20D3323D79289F (void);
// 0x000002F1 System.Void NG.TextureScale::PointScale(System.Object)
extern void TextureScale_PointScale_m1B588C79A50088C6ED032040F854AA351154B812 (void);
// 0x000002F2 UnityEngine.Color NG.TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
extern void TextureScale_ColorLerpUnclamped_m062221AAC51EBF0BA4AEC7A51726D1428433D544 (void);
// 0x000002F3 System.Void NG.TextureScale::.ctor()
extern void TextureScale__ctor_m90A1E864C1C0A7AA545EB1E257C080689F51A7A4 (void);
// 0x000002F4 System.Void NG.TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
extern void ThreadData__ctor_mA17317152FE8447E38D217E9EACA5A10C386E5BE (void);
// 0x000002F5 UnityEngine.TextureFormat NG.ScreenshotHelper::get_textureFormat()
extern void ScreenshotHelper_get_textureFormat_m72FE9C294334384351F61C49DDC955CF20FF7502 (void);
// 0x000002F6 System.Int32 NG.ScreenshotHelper::get_Depth()
extern void ScreenshotHelper_get_Depth_m0361E5CBD97D6F8D6ACDDA81D0C4CF898962ED3B (void);
// 0x000002F7 NG.ScreenshotHelper NG.ScreenshotHelper::get_instance()
extern void ScreenshotHelper_get_instance_m7EE39E4869DEAF81B765C2D39C36B9DC4E222766 (void);
// 0x000002F8 System.Void NG.ScreenshotHelper::Awake()
extern void ScreenshotHelper_Awake_m6AD5347A8C384FD92E5C5FD2CFEA97F88FA9861C (void);
// 0x000002F9 System.String NG.ScreenshotHelper::BuildSaveLocation()
extern void ScreenshotHelper_BuildSaveLocation_m73C7403085233A9A9E8C0B42086219C6E64202B3 (void);
// 0x000002FA System.Void NG.ScreenshotHelper::Update()
extern void ScreenshotHelper_Update_mE994EF10F9C1F00746DB2ADEE9D84DF905736C18 (void);
// 0x000002FB System.Void NG.ScreenshotHelper::UpdateDimensions()
extern void ScreenshotHelper_UpdateDimensions_m1FF3EBE8A624B43CF992FEF17B3F1F8AFC88976E (void);
// 0x000002FC System.Void NG.ScreenshotHelper::WarnCanvases()
extern void ScreenshotHelper_WarnCanvases_m85B9FC05DA8A2E2E09C522725289B5B556F6E253 (void);
// 0x000002FD System.Void NG.ScreenshotHelper::GetScreenShots()
extern void ScreenshotHelper_GetScreenShots_m68D3B341B883C0221A633876DD19D149E8380656 (void);
// 0x000002FE System.Int32 NG.ScreenshotHelper::GetFileNum(System.String)
extern void ScreenshotHelper_GetFileNum_m6B8BD319BD9EE9FB520E1A80312EACF9A91495C5 (void);
// 0x000002FF System.Boolean NG.ScreenshotHelper::get_IsTakingShots()
extern void ScreenshotHelper_get_IsTakingShots_m1E2FC7042AC6004500113115C46620809535C2C7 (void);
// 0x00000300 System.Void NG.ScreenshotHelper::set_IsTakingShots(System.Boolean)
extern void ScreenshotHelper_set_IsTakingShots_m2EC0E3EA8D66A00E776984780B1C1F6F61D59AF2 (void);
// 0x00000301 System.Collections.IEnumerator NG.ScreenshotHelper::TakeScreenShots()
extern void ScreenshotHelper_TakeScreenShots_m6A5EEE6B201E0F88EE457A54FC918E487362E411 (void);
// 0x00000302 System.Void NG.ScreenshotHelper::RunFinishRoutine(System.Int32,System.Single)
extern void ScreenshotHelper_RunFinishRoutine_m840BA0A07D13F0497D0A8D913DCB22CB6209E064 (void);
// 0x00000303 System.Collections.IEnumerator NG.ScreenshotHelper::FinishRoutine(System.Int32,System.Single)
extern void ScreenshotHelper_FinishRoutine_m2EC58CDA85E155E55FD058B2D8AFFC0F4A3CF6B8 (void);
// 0x00000304 System.Void NG.ScreenshotHelper::RemoveAllCustomSizes()
extern void ScreenshotHelper_RemoveAllCustomSizes_m01FFBE20B8D7DFD5306F0705AC7CB9346A9DF270 (void);
// 0x00000305 System.String NG.ScreenshotHelper::GetScreenShotName(NG.ShotSize)
extern void ScreenshotHelper_GetScreenShotName_mD1BD4B59ACB979B74215E438990113299D7BE77E (void);
// 0x00000306 System.Void NG.ScreenshotHelper::SetDefaults()
extern void ScreenshotHelper_SetDefaults_mA2A4A9F96E903CFEFB556417BDB39C0D18090A09 (void);
// 0x00000307 System.Void NG.ScreenshotHelper::.ctor()
extern void ScreenshotHelper__ctor_m01EA9959DD1E1983515D5747717AEA41D28FA625 (void);
// 0x00000308 System.Void NG.ScreenshotHelper/ScreenChange::.ctor(System.Object,System.IntPtr)
extern void ScreenChange__ctor_m6DEF8E0EEB35C63C36F4F01F01B12E182DE39A38 (void);
// 0x00000309 System.Void NG.ScreenshotHelper/ScreenChange::Invoke()
extern void ScreenChange_Invoke_m6BBEDFE735B9A92811DC0EE18F5B22E716A276A0 (void);
// 0x0000030A System.IAsyncResult NG.ScreenshotHelper/ScreenChange::BeginInvoke(System.AsyncCallback,System.Object)
extern void ScreenChange_BeginInvoke_m8CF9E928B57FBD04AE032A48E14A042E3D024AD5 (void);
// 0x0000030B System.Void NG.ScreenshotHelper/ScreenChange::EndInvoke(System.IAsyncResult)
extern void ScreenChange_EndInvoke_mE46A1EBBDDB9B3A14C280A38C38B8BE99DA36A32 (void);
// 0x0000030C System.Void NG.ScreenshotHelper/PathChangeDelegate::.ctor(System.Object,System.IntPtr)
extern void PathChangeDelegate__ctor_mD5E488012552B9DF75A57E97D5C1F9FB9CB675D3 (void);
// 0x0000030D System.Void NG.ScreenshotHelper/PathChangeDelegate::Invoke(System.String)
extern void PathChangeDelegate_Invoke_m312F8613CA6C2F567710C9AEFF3E726260514975 (void);
// 0x0000030E System.IAsyncResult NG.ScreenshotHelper/PathChangeDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void PathChangeDelegate_BeginInvoke_mE57C66FF4F6FEDAAE68663AC4A611F600841459F (void);
// 0x0000030F System.Void NG.ScreenshotHelper/PathChangeDelegate::EndInvoke(System.IAsyncResult)
extern void PathChangeDelegate_EndInvoke_m7CE99284DCC5DC0C037C1A9FE00DAC04D9803F77 (void);
// 0x00000310 System.Void NG.ScreenshotHelper/DefaultsSetDelegate::.ctor(System.Object,System.IntPtr)
extern void DefaultsSetDelegate__ctor_m40ECF530FF38F95EFA6E92967D86B1B45D85C254 (void);
// 0x00000311 System.Void NG.ScreenshotHelper/DefaultsSetDelegate::Invoke()
extern void DefaultsSetDelegate_Invoke_m1B4C62FA864E4A4D4AF842EB350A6B8D8D6DB9BE (void);
// 0x00000312 System.IAsyncResult NG.ScreenshotHelper/DefaultsSetDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void DefaultsSetDelegate_BeginInvoke_m378F9FB09C817EAC1EAD9E469BABA6AB166F60D2 (void);
// 0x00000313 System.Void NG.ScreenshotHelper/DefaultsSetDelegate::EndInvoke(System.IAsyncResult)
extern void DefaultsSetDelegate_EndInvoke_m85DC23A18F3487BC418B1D7EEC57CFB139592ECC (void);
// 0x00000314 System.Void NG.ScreenshotHelper/<>c::.cctor()
extern void U3CU3Ec__cctor_m18D53755F9D162A63A64A6D3C2A3CBCD7958B14E (void);
// 0x00000315 System.Void NG.ScreenshotHelper/<>c::.ctor()
extern void U3CU3Ec__ctor_m746C6628BD4EDF5473B439CC103E2D080271F03B (void);
// 0x00000316 System.Void NG.ScreenshotHelper/<>c::<Awake>b__25_0()
extern void U3CU3Ec_U3CAwakeU3Eb__25_0_m584C42A9D9E2599FEA791BB377FA8B38A7EA2ED6 (void);
// 0x00000317 System.Single NG.ScreenshotHelper/<>c::<TakeScreenShots>b__40_0(UnityEngine.Camera)
extern void U3CU3Ec_U3CTakeScreenShotsU3Eb__40_0_mF5198A89A7A18C8D8B6FF41E895AC7E3A50015A5 (void);
// 0x00000318 System.Int32 NG.ScreenshotHelper/<>c::<SetDefaults>b__47_0(NG.ShotSize)
extern void U3CU3Ec_U3CSetDefaultsU3Eb__47_0_m8B09DC90AB50EB56D89B8218FB752E1EDEED4355 (void);
// 0x00000319 System.Void NG.ScreenshotHelper/<>c__DisplayClass40_0::.ctor()
extern void U3CU3Ec__DisplayClass40_0__ctor_mECBE689C6EA8EF81C4944982E2EC94E50BCC852C (void);
// 0x0000031A System.Void NG.ScreenshotHelper/<>c__DisplayClass40_1::.ctor()
extern void U3CU3Ec__DisplayClass40_1__ctor_m871F7AC1D28F8522785EAB34AD57D8AF45317051 (void);
// 0x0000031B System.Void NG.ScreenshotHelper/<>c__DisplayClass40_1::<TakeScreenShots>b__1(UnityEngine.Color[])
extern void U3CU3Ec__DisplayClass40_1_U3CTakeScreenShotsU3Eb__1_m2E83B2EE2832A7F0CA1A715A16AAEC927126A12C (void);
// 0x0000031C System.Void NG.ScreenshotHelper/<>c__DisplayClass40_2::.ctor()
extern void U3CU3Ec__DisplayClass40_2__ctor_m14182BB0AF5B72CC5DADA5CACD6F91127CA9A8EA (void);
// 0x0000031D System.Void NG.ScreenshotHelper/<>c__DisplayClass40_2::<TakeScreenShots>b__2()
extern void U3CU3Ec__DisplayClass40_2_U3CTakeScreenShotsU3Eb__2_m239A9A2710255928EF85C9AC41E311EFBDA03FE1 (void);
// 0x0000031E System.Void NG.ScreenshotHelper/<TakeScreenShots>d__40::.ctor(System.Int32)
extern void U3CTakeScreenShotsU3Ed__40__ctor_mB87366B5F3A6E47BD226C8F4FB01D3AFDBC0658D (void);
// 0x0000031F System.Void NG.ScreenshotHelper/<TakeScreenShots>d__40::System.IDisposable.Dispose()
extern void U3CTakeScreenShotsU3Ed__40_System_IDisposable_Dispose_mEADAA3BA5BA5AAA0E1D806B5CEA01FE9ECA69739 (void);
// 0x00000320 System.Boolean NG.ScreenshotHelper/<TakeScreenShots>d__40::MoveNext()
extern void U3CTakeScreenShotsU3Ed__40_MoveNext_m826A0851F599205CE3304A4FFAC947D3E3043ABB (void);
// 0x00000321 System.Void NG.ScreenshotHelper/<TakeScreenShots>d__40::<>m__Finally1()
extern void U3CTakeScreenShotsU3Ed__40_U3CU3Em__Finally1_m5BB502470A091DBFC44CD32BFCD511C34096267E (void);
// 0x00000322 System.Object NG.ScreenshotHelper/<TakeScreenShots>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CTakeScreenShotsU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD107EBC3704A50AE4678CF640241B330B754A65 (void);
// 0x00000323 System.Void NG.ScreenshotHelper/<TakeScreenShots>d__40::System.Collections.IEnumerator.Reset()
extern void U3CTakeScreenShotsU3Ed__40_System_Collections_IEnumerator_Reset_m1456FEF783D118E72FCE8F7B6DBE582BB0FB8BAB (void);
// 0x00000324 System.Object NG.ScreenshotHelper/<TakeScreenShots>d__40::System.Collections.IEnumerator.get_Current()
extern void U3CTakeScreenShotsU3Ed__40_System_Collections_IEnumerator_get_Current_m306F0D9AEA14323432D48D9B4D71715F88BDAA8F (void);
// 0x00000325 System.Void NG.ScreenshotHelper/<FinishRoutine>d__42::.ctor(System.Int32)
extern void U3CFinishRoutineU3Ed__42__ctor_mE842F5732E7178127C6122D40527D51028373220 (void);
// 0x00000326 System.Void NG.ScreenshotHelper/<FinishRoutine>d__42::System.IDisposable.Dispose()
extern void U3CFinishRoutineU3Ed__42_System_IDisposable_Dispose_mBABDC89E3ABB0CAA196EEB99C09DB316A90C9902 (void);
// 0x00000327 System.Boolean NG.ScreenshotHelper/<FinishRoutine>d__42::MoveNext()
extern void U3CFinishRoutineU3Ed__42_MoveNext_m60AB957C55C7772051FEA47C827F446B489B4889 (void);
// 0x00000328 System.Object NG.ScreenshotHelper/<FinishRoutine>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CFinishRoutineU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE509A1E9B0335B4D908AED6D0EC422B99F292337 (void);
// 0x00000329 System.Void NG.ScreenshotHelper/<FinishRoutine>d__42::System.Collections.IEnumerator.Reset()
extern void U3CFinishRoutineU3Ed__42_System_Collections_IEnumerator_Reset_mD8A03FFC1A55FABD33B121D0B13E2F375C8BBA85 (void);
// 0x0000032A System.Object NG.ScreenshotHelper/<FinishRoutine>d__42::System.Collections.IEnumerator.get_Current()
extern void U3CFinishRoutineU3Ed__42_System_Collections_IEnumerator_get_Current_m87B28A4BD70F8CCD207FBE4E14056026DE5AEEBD (void);
// 0x0000032B System.Int32 Facebook.Unity.Example.ConsoleBase::get_ButtonHeight()
extern void ConsoleBase_get_ButtonHeight_mF81259A974C9E3C4B24AFB8D95A18F0A03EE3396 (void);
// 0x0000032C System.Int32 Facebook.Unity.Example.ConsoleBase::get_MainWindowWidth()
extern void ConsoleBase_get_MainWindowWidth_m9D6DB2FC65DC5D7FA781E5CF2FDB945C760D3C1E (void);
// 0x0000032D System.Int32 Facebook.Unity.Example.ConsoleBase::get_MainWindowFullWidth()
extern void ConsoleBase_get_MainWindowFullWidth_m7238BF9690E4397727DF038E6B185AFC2F7A1BF8 (void);
// 0x0000032E System.Int32 Facebook.Unity.Example.ConsoleBase::get_MarginFix()
extern void ConsoleBase_get_MarginFix_m286762B25357CC839197F05CC557CCFA376B7DB3 (void);
// 0x0000032F System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::get_MenuStack()
extern void ConsoleBase_get_MenuStack_mA1E88A5414EA46C243855D30F28FB58F507F7597 (void);
// 0x00000330 System.Void Facebook.Unity.Example.ConsoleBase::set_MenuStack(System.Collections.Generic.Stack`1<System.String>)
extern void ConsoleBase_set_MenuStack_mDC687D0701EEDAD9D55A44AE9449326C5E6ADFDC (void);
// 0x00000331 System.String Facebook.Unity.Example.ConsoleBase::get_Status()
extern void ConsoleBase_get_Status_m71AFE45D2F68B01846188F212D65923B5B341728 (void);
// 0x00000332 System.Void Facebook.Unity.Example.ConsoleBase::set_Status(System.String)
extern void ConsoleBase_set_Status_mFD36D24FF2D3D6554F11859251BB325B750776D2 (void);
// 0x00000333 UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::get_LastResponseTexture()
extern void ConsoleBase_get_LastResponseTexture_m02F8A694917953E5B184AC489DBE600009451DCE (void);
// 0x00000334 System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponseTexture(UnityEngine.Texture2D)
extern void ConsoleBase_set_LastResponseTexture_m8ED57EA554542EB683B1484F5DDE13ED983A146D (void);
// 0x00000335 System.String Facebook.Unity.Example.ConsoleBase::get_LastResponse()
extern void ConsoleBase_get_LastResponse_m5BCC50E8189B285B0AE6244435A8A9F6E3D4CE85 (void);
// 0x00000336 System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponse(System.String)
extern void ConsoleBase_set_LastResponse_m847D45A344585AFCFCE231CF8993E2A750C76547 (void);
// 0x00000337 UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::get_ScrollPosition()
extern void ConsoleBase_get_ScrollPosition_m489494F56C1E8E36B530B9CEBF1973640D39A47D (void);
// 0x00000338 System.Void Facebook.Unity.Example.ConsoleBase::set_ScrollPosition(UnityEngine.Vector2)
extern void ConsoleBase_set_ScrollPosition_m7C2D74B4FF2432875A98B2F5A70F4D02494A9C84 (void);
// 0x00000339 System.Single Facebook.Unity.Example.ConsoleBase::get_ScaleFactor()
extern void ConsoleBase_get_ScaleFactor_m54D2E9E038B321F36372AB6284799232475B37F2 (void);
// 0x0000033A System.Int32 Facebook.Unity.Example.ConsoleBase::get_FontSize()
extern void ConsoleBase_get_FontSize_mBA25F85EA4D6916062FE3D049BDE8BF618D5189F (void);
// 0x0000033B UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextStyle()
extern void ConsoleBase_get_TextStyle_m08AB60C7174363AE850D9F15A5C606E73D766704 (void);
// 0x0000033C UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_ButtonStyle()
extern void ConsoleBase_get_ButtonStyle_m28EF2E33654CE9FC915EBECA78D93778517322E2 (void);
// 0x0000033D UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextInputStyle()
extern void ConsoleBase_get_TextInputStyle_m99CA0D3F64E54CCF5DED958ACB141D07EEFB0C13 (void);
// 0x0000033E UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_LabelStyle()
extern void ConsoleBase_get_LabelStyle_m97006D9788464D58A9BA885AD2348D784699C346 (void);
// 0x0000033F System.Void Facebook.Unity.Example.ConsoleBase::Awake()
extern void ConsoleBase_Awake_m8068C221C280D202F4051E0CBFBF91C77568CCD7 (void);
// 0x00000340 System.Boolean Facebook.Unity.Example.ConsoleBase::Button(System.String)
extern void ConsoleBase_Button_m8787498ECF036B9B3B5EB6B2FF49AFA154282D10 (void);
// 0x00000341 System.Void Facebook.Unity.Example.ConsoleBase::LabelAndTextField(System.String,System.String&)
extern void ConsoleBase_LabelAndTextField_m72E1BBF75934CE747195CB87737A2D7EFC503A8A (void);
// 0x00000342 System.Boolean Facebook.Unity.Example.ConsoleBase::IsHorizontalLayout()
extern void ConsoleBase_IsHorizontalLayout_m90873C8D21DF82E9733E95CD43BFB72A54912B1D (void);
// 0x00000343 System.Void Facebook.Unity.Example.ConsoleBase::SwitchMenu(System.Type)
extern void ConsoleBase_SwitchMenu_mA4A6A237A2D4EE813268204D38391A9D2AB7BC34 (void);
// 0x00000344 System.Void Facebook.Unity.Example.ConsoleBase::GoBack()
extern void ConsoleBase_GoBack_mA682B2317560D91C931680AA95C1AD390611304A (void);
// 0x00000345 System.Void Facebook.Unity.Example.ConsoleBase::.ctor()
extern void ConsoleBase__ctor_m2295736CFFF716F434C20994E95820657BA9C751 (void);
// 0x00000346 System.Void Facebook.Unity.Example.ConsoleBase::.cctor()
extern void ConsoleBase__cctor_mE537FEF66506B08BAF97CD2B40D29210C530F6BB (void);
// 0x00000347 System.Void Facebook.Unity.Example.LogView::AddLog(System.String)
extern void LogView_AddLog_mF87B865A91948F6D3F59502861BF67B6354B4A0E (void);
// 0x00000348 System.Void Facebook.Unity.Example.LogView::OnGUI()
extern void LogView_OnGUI_m6B78F78EC906C89DA0BE45F5D3C5571126542376 (void);
// 0x00000349 System.Void Facebook.Unity.Example.LogView::.ctor()
extern void LogView__ctor_m23A534F52CC925EE10260A5EC32DECBDADE2F35D (void);
// 0x0000034A System.Void Facebook.Unity.Example.LogView::.cctor()
extern void LogView__cctor_m112A3FBD481C9FC1A99F57426E9D79AC9E36F226 (void);
// 0x0000034B System.Void Facebook.Unity.Example.MenuBase::GetGui()
// 0x0000034C System.Boolean Facebook.Unity.Example.MenuBase::ShowDialogModeSelector()
extern void MenuBase_ShowDialogModeSelector_mB52DA9E57B0AF80ED97B7951B1815424F939A5D6 (void);
// 0x0000034D System.Boolean Facebook.Unity.Example.MenuBase::ShowBackButton()
extern void MenuBase_ShowBackButton_m33BAD66D85A5FA9E564FF8CF85E8920842238BAE (void);
// 0x0000034E System.Void Facebook.Unity.Example.MenuBase::HandleResult(Facebook.Unity.IResult)
extern void MenuBase_HandleResult_m0CB446ED4B8BDA605B140E61A4A1C6B442765E65 (void);
// 0x0000034F System.Void Facebook.Unity.Example.MenuBase::HandleLimitedLoginResult(Facebook.Unity.IResult)
extern void MenuBase_HandleLimitedLoginResult_m5A42F3F12FA695D59588DCC12004870D55C4ECB9 (void);
// 0x00000350 System.Void Facebook.Unity.Example.MenuBase::OnGUI()
extern void MenuBase_OnGUI_m2EDD4E22A69914B99CBDF039142129959C363D97 (void);
// 0x00000351 System.Void Facebook.Unity.Example.MenuBase::AddStatus()
extern void MenuBase_AddStatus_mA9B44C51B6D228B6EB901EA6FDEC17B6524FF98E (void);
// 0x00000352 System.Void Facebook.Unity.Example.MenuBase::AddBackButton()
extern void MenuBase_AddBackButton_m546C0ED7A454CD1CC80C9BCE27E56D924E6FCDC6 (void);
// 0x00000353 System.Void Facebook.Unity.Example.MenuBase::AddLogButton()
extern void MenuBase_AddLogButton_mDCB6003139C36CE1485D8F6C70C23BF7A13FB812 (void);
// 0x00000354 System.Void Facebook.Unity.Example.MenuBase::AddDialogModeButtons()
extern void MenuBase_AddDialogModeButtons_mCEA0B4B8B4C88A0A8F9A7B4737B4595B0FE5B208 (void);
// 0x00000355 System.Void Facebook.Unity.Example.MenuBase::AddDialogModeButton(Facebook.Unity.ShareDialogMode)
extern void MenuBase_AddDialogModeButton_m8F24FD4F294616E73BEC80B082FADB4D73BF1AC2 (void);
// 0x00000356 System.Void Facebook.Unity.Example.MenuBase::.ctor()
extern void MenuBase__ctor_mD1A153F6EBCE35B5990669A20787B391A5DEC0E2 (void);
// 0x00000357 System.Void Facebook.Unity.Example.AccessTokenMenu::GetGui()
extern void AccessTokenMenu_GetGui_mAFFC7AADE6A3C5A549A15922B3933F868690FBB7 (void);
// 0x00000358 System.Void Facebook.Unity.Example.AccessTokenMenu::.ctor()
extern void AccessTokenMenu__ctor_mA506557143C1CEB6F2D52ED9EECC44FB9058804C (void);
// 0x00000359 System.Void Facebook.Unity.Example.AppEvents::GetGui()
extern void AppEvents_GetGui_m4D6548C60C8A0B6B81EB16E4F20416013669AE09 (void);
// 0x0000035A System.Void Facebook.Unity.Example.AppEvents::.ctor()
extern void AppEvents__ctor_m633F317D3E69F6B62705498B7790C36075F3C09B (void);
// 0x0000035B System.Void Facebook.Unity.Example.AppLinks::GetGui()
extern void AppLinks_GetGui_mEF6BABE28307C19F823198102718BF2DCBE91FC2 (void);
// 0x0000035C System.Void Facebook.Unity.Example.AppLinks::.ctor()
extern void AppLinks__ctor_m2408DE5760F132BFD7437824410EE9FA14FE7F02 (void);
// 0x0000035D System.Void Facebook.Unity.Example.AppRequests::GetGui()
extern void AppRequests_GetGui_mF21A92393C08E39EA4404B8AD9DE1076A42A7060 (void);
// 0x0000035E System.Nullable`1<Facebook.Unity.OGActionType> Facebook.Unity.Example.AppRequests::GetSelectedOGActionType()
extern void AppRequests_GetSelectedOGActionType_m350F98087C7EB39851FC4562007A9EC26261BA1A (void);
// 0x0000035F System.Void Facebook.Unity.Example.AppRequests::.ctor()
extern void AppRequests__ctor_m22F0E79DD38013C0846E20AC2E9F96FCCE6356D8 (void);
// 0x00000360 System.Boolean Facebook.Unity.Example.DialogShare::ShowDialogModeSelector()
extern void DialogShare_ShowDialogModeSelector_mCF0A9C2537886392CC684FBD4939F14C6B8A1F87 (void);
// 0x00000361 System.Void Facebook.Unity.Example.DialogShare::GetGui()
extern void DialogShare_GetGui_m5A303622B0B9250A1C0E9570683CE6F5DC894783 (void);
// 0x00000362 System.Void Facebook.Unity.Example.DialogShare::.ctor()
extern void DialogShare__ctor_m18343E0A2E25DD13D50F65E99F855EE5CBB4A44F (void);
// 0x00000363 System.Void Facebook.Unity.Example.GraphRequest::GetGui()
extern void GraphRequest_GetGui_m04AC165B02447897B6210A4EEA01341C54A18E7E (void);
// 0x00000364 System.Void Facebook.Unity.Example.GraphRequest::ProfilePhotoCallback(Facebook.Unity.IGraphResult)
extern void GraphRequest_ProfilePhotoCallback_m377E44982A0745303405A4B2792BEAEA617DC962 (void);
// 0x00000365 System.Collections.IEnumerator Facebook.Unity.Example.GraphRequest::TakeScreenshot()
extern void GraphRequest_TakeScreenshot_mB6D07D0BD896A3FDA1B3A0CECD1F41A82BB71153 (void);
// 0x00000366 System.Void Facebook.Unity.Example.GraphRequest::.ctor()
extern void GraphRequest__ctor_m1893756902051EDCA6A648EFF3F8C79482D72F17 (void);
// 0x00000367 System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::.ctor(System.Int32)
extern void U3CTakeScreenshotU3Ed__4__ctor_mC5022BC2D6F58E67E8D34863FDDD01DB102192A9 (void);
// 0x00000368 System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.IDisposable.Dispose()
extern void U3CTakeScreenshotU3Ed__4_System_IDisposable_Dispose_m024CE39BF1690FA910DDA8A774BFC512D437756F (void);
// 0x00000369 System.Boolean Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::MoveNext()
extern void U3CTakeScreenshotU3Ed__4_MoveNext_m1BC8573BD27ED010119E112AA3BE6CA166C05D31 (void);
// 0x0000036A System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CTakeScreenshotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF4F64034B62BD451ED5DB8EF972FC4B40806FC23 (void);
// 0x0000036B System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.IEnumerator.Reset()
extern void U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m99D229E478D52F853F19ADCBCFFDAF25C148D899 (void);
// 0x0000036C System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_get_Current_m13E1B2CBD35D3D58C012334F0A4FD17B3930C030 (void);
// 0x0000036D System.Boolean Facebook.Unity.Example.MainMenu::ShowBackButton()
extern void MainMenu_ShowBackButton_m0AA293F10C340E46851503EF2B29E235FE61BBE8 (void);
// 0x0000036E System.Void Facebook.Unity.Example.MainMenu::GetGui()
extern void MainMenu_GetGui_mBEAC140C4E2DC7BEE3B2F1FA3AA744770B6BE1BF (void);
// 0x0000036F System.Void Facebook.Unity.Example.MainMenu::CallFBLogin(Facebook.Unity.LoginTracking,System.Collections.Generic.HashSet`1<Facebook.Unity.Example.MainMenu/Scope>)
extern void MainMenu_CallFBLogin_m07CFAA572C425B0EF1CDD4E7B7A906AA7DA8AD3E (void);
// 0x00000370 System.Void Facebook.Unity.Example.MainMenu::CallFBLoginForPublish()
extern void MainMenu_CallFBLoginForPublish_m5519242C5D4241EF52CA37F78A5BCEEF18973A19 (void);
// 0x00000371 System.Void Facebook.Unity.Example.MainMenu::CallFBLogout()
extern void MainMenu_CallFBLogout_mEE96298E9614D3F79009BB034E4DB1047A7855C3 (void);
// 0x00000372 System.Void Facebook.Unity.Example.MainMenu::OnInitComplete()
extern void MainMenu_OnInitComplete_m36800A94B891CDDCC9C4DAED0CC5639190C2E207 (void);
// 0x00000373 System.Void Facebook.Unity.Example.MainMenu::OnHideUnity(System.Boolean)
extern void MainMenu_OnHideUnity_mDE312A6C6A2FE6F756E72A64388E31F5BE626D84 (void);
// 0x00000374 System.Void Facebook.Unity.Example.MainMenu::.ctor()
extern void MainMenu__ctor_m15C7560C4A0296BB1D433FA3D8B1C82568B7179F (void);
// 0x00000375 System.Void Facebook.Unity.Example.Pay::GetGui()
extern void Pay_GetGui_m38BDD0E07950F97403560C5AAD4D35F4ABE590AA (void);
// 0x00000376 System.Void Facebook.Unity.Example.Pay::CallFBPay()
extern void Pay_CallFBPay_m6C1243E4AA248F715366AA5E8996D25431AA2A58 (void);
// 0x00000377 System.Void Facebook.Unity.Example.Pay::.ctor()
extern void Pay__ctor_mF524FF0E64FFA62C166094B9CFE640D276161A26 (void);
// 0x00000378 System.Void Facebook.Unity.Example.TournamentsMenu::GetGui()
extern void TournamentsMenu_GetGui_m2DB7B4FBCBB150B9A9AA56743F8AD986EAFDA459 (void);
// 0x00000379 System.Void Facebook.Unity.Example.TournamentsMenu::.ctor()
extern void TournamentsMenu__ctor_mA3069507B062E55BF40EA9C97FEDBF5C64B69705 (void);
// 0x0000037A System.Void WatchSelector.WatchSelector::OnValidate()
extern void WatchSelector_OnValidate_m3187EE5800AEC1EAA3E5FC50D7477C6667DB55C5 (void);
// 0x0000037B System.Void WatchSelector.WatchSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void WatchSelector_ValidateObject_mC8735DF2FDE8891DB0CB00229B287CD8622EEC33 (void);
// 0x0000037C System.Void WatchSelector.WatchSelector::.ctor()
extern void WatchSelector__ctor_m1679FC905C81AE2831AEE51CE33087DB95075AA2 (void);
// 0x0000037D System.Void TieSelector.TieSelector::OnValidate()
extern void TieSelector_OnValidate_m71BEEB34D86C0682DB3BA4138C51152C90417CF8 (void);
// 0x0000037E System.Void TieSelector.TieSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void TieSelector_ValidateObject_m2974D2A280B47C54F57A615C27F0496F7A2AE604 (void);
// 0x0000037F System.Void TieSelector.TieSelector::.ctor()
extern void TieSelector__ctor_mAFEE5AFD02BBF387BC4E4399A85306001F2B70BE (void);
// 0x00000380 System.Void SkirtSelector.SkirtSelector::OnValidate()
extern void SkirtSelector_OnValidate_mBFA17B87D9B1A61B2D1F21E7AC70B2514609764D (void);
// 0x00000381 System.Void SkirtSelector.SkirtSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void SkirtSelector_ValidateObject_m81FB9F4CCF1D9B662E94D84E212FA836F6561C68 (void);
// 0x00000382 System.Void SkirtSelector.SkirtSelector::.ctor()
extern void SkirtSelector__ctor_m98D4C4B4623A697F46933F89C7B75A6A12FAB4AA (void);
// 0x00000383 System.Void SkinSelector.SkinSelector::OnValidate()
extern void SkinSelector_OnValidate_mAFE8548D6C6625409E666D3254197FD7AFE76090 (void);
// 0x00000384 System.Void SkinSelector.SkinSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void SkinSelector_ValidateObject_mE710A1914B4EB1ADD8F3B411F370DF13F4B4D7F6 (void);
// 0x00000385 System.Void SkinSelector.SkinSelector::.ctor()
extern void SkinSelector__ctor_m7B0993243886FBE8E6DAD767B3371990FF9B8B40 (void);
// 0x00000386 System.Void ShoeSelector.ShoeSelector::OnValidate()
extern void ShoeSelector_OnValidate_m3DD10D212A4FF15BE36460B89B6C3A78716CE705 (void);
// 0x00000387 System.Void ShoeSelector.ShoeSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void ShoeSelector_ValidateObject_mEB0290F63B81E2D517F9CBD9C58C111C1B0F97F6 (void);
// 0x00000388 System.Void ShoeSelector.ShoeSelector::.ctor()
extern void ShoeSelector__ctor_m04B3C78FA3A733B9D1EFD410D367D616486B07D2 (void);
// 0x00000389 System.Void ShirtSelector.ShirtSelector::OnValidate()
extern void ShirtSelector_OnValidate_mFB8DB2B4C3C802C06D79A746559D471AE2F90739 (void);
// 0x0000038A System.Void ShirtSelector.ShirtSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void ShirtSelector_ValidateObject_mD916D651B7A3E7104953D15325AE7BFB5241B466 (void);
// 0x0000038B System.Void ShirtSelector.ShirtSelector::.ctor()
extern void ShirtSelector__ctor_m820AA91886BE944D341E7BB021021689850CDABB (void);
// 0x0000038C System.Void PantSelector.PantSelector::OnValidate()
extern void PantSelector_OnValidate_m9089B22899B203A026BEC09B46672D2D3346DA0E (void);
// 0x0000038D System.Void PantSelector.PantSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void PantSelector_ValidateObject_m5C5437773FCC653B6F12E7A4999D76C6A068BC8D (void);
// 0x0000038E System.Void PantSelector.PantSelector::.ctor()
extern void PantSelector__ctor_mBF5840072A2EF1232320D8C44EF9444CB31D92CA (void);
// 0x0000038F System.Void LegSelector.LegSelector::OnValidate()
extern void LegSelector_OnValidate_mE49195E0D427D949DB1BDF19CD3A3FF793283A2C (void);
// 0x00000390 System.Void LegSelector.LegSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void LegSelector_ValidateObject_mA5E0A19F81DFC9C5D14FBE5BC5EC242F99D747D0 (void);
// 0x00000391 System.Void LegSelector.LegSelector::.ctor()
extern void LegSelector__ctor_m5643364B6019ED2D63DE0A301197B3ED0DAA7459 (void);
// 0x00000392 System.Void JacketSelector.JacketSelector::OnValidate()
extern void JacketSelector_OnValidate_m6C17178A665FBE61293948EC2841CB3449EF63B6 (void);
// 0x00000393 System.Void JacketSelector.JacketSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void JacketSelector_ValidateObject_m3EEF31E5052A5CF6D891DE86A0EC868DB8F97EFB (void);
// 0x00000394 System.Void JacketSelector.JacketSelector::.ctor()
extern void JacketSelector__ctor_m8F3C8C699AA88F607C75801F0336890813077AF5 (void);
// 0x00000395 System.Void HeadSelector.HeadSelector::OnValidate()
extern void HeadSelector_OnValidate_mB22820EAB85E43D6FF64DA19308969F5853F5D93 (void);
// 0x00000396 System.Void HeadSelector.HeadSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void HeadSelector_ValidateObject_m8F578BCACDC64D1933F36FAD3E2374AC9353A8F1 (void);
// 0x00000397 System.Void HeadSelector.HeadSelector::.ctor()
extern void HeadSelector__ctor_mAEE6822315CFFCD9B1D6A1DC00C21B4794DAB1A3 (void);
// 0x00000398 System.Void HeadphoneSelector.HeadphoneSelector::OnValidate()
extern void HeadphoneSelector_OnValidate_m90ECB96DB1D9426F6FC0A21763BEAC787AD07604 (void);
// 0x00000399 System.Void HeadphoneSelector.HeadphoneSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void HeadphoneSelector_ValidateObject_mAD1103B556A0B9311FA3BDF12B741F60FFBFD80B (void);
// 0x0000039A System.Void HeadphoneSelector.HeadphoneSelector::.ctor()
extern void HeadphoneSelector__ctor_m0BDD51673CC2E889DB459498AB0D44040D8F9840 (void);
// 0x0000039B System.Void HatSelector.HatSelector::OnValidate()
extern void HatSelector_OnValidate_mCE68923D2FC5C401EF65A82FD812622BD5A6F357 (void);
// 0x0000039C System.Void HatSelector.HatSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void HatSelector_ValidateObject_m63AD18D4BEE3905638C256025AB70C0A96095000 (void);
// 0x0000039D System.Void HatSelector.HatSelector::.ctor()
extern void HatSelector__ctor_m113B6E684D38DE448EFDE1EAD48AB7F2749F39D9 (void);
// 0x0000039E System.Void HairSelector.HairSelector::OnValidate()
extern void HairSelector_OnValidate_mE81CEE912A32AA44F7C6C4CFF7A6578C84D1807C (void);
// 0x0000039F System.Void HairSelector.HairSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void HairSelector_ValidateObject_m644A24C34EFC8B37C48E379BE0F297E2A7B84A21 (void);
// 0x000003A0 System.Void HairSelector.HairSelector::.ctor()
extern void HairSelector__ctor_mF292E8E01ADBC4F271C0791969D8F1D21BB62C68 (void);
// 0x000003A1 System.Void GlassesSelector.GlassesSelector::OnValidate()
extern void GlassesSelector_OnValidate_m22D07FDF322DFF4C8CF751E51891A717A44B7417 (void);
// 0x000003A2 System.Void GlassesSelector.GlassesSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void GlassesSelector_ValidateObject_m5C695CFF3E1346B9E95414B8BCA4D46F281F8E5E (void);
// 0x000003A3 System.Void GlassesSelector.GlassesSelector::.ctor()
extern void GlassesSelector__ctor_mAFFE23D4657671D282E8517A37D890ECED20AFB7 (void);
// 0x000003A4 System.Void TCP_Fatness_Level.FatnessLevel::OnValidate()
extern void FatnessLevel_OnValidate_m5D345BFBF5073DDAB87F95C66E3BC8E45D86B2A8 (void);
// 0x000003A5 System.Void TCP_Fatness_Level.FatnessLevel::SetFatValueForGameObject(System.Int32)
extern void FatnessLevel_SetFatValueForGameObject_mDC5DEA8480FAE18EE1315EA558EA0938C1D3F18B (void);
// 0x000003A6 System.Void TCP_Fatness_Level.FatnessLevel::.ctor()
extern void FatnessLevel__ctor_m13EB3AA1B1C6017234F850EC0627BD8623EC50F6 (void);
// 0x000003A7 System.Void FannyPackSelector.FannyPackSelector::OnValidate()
extern void FannyPackSelector_OnValidate_m1EC742DACEB6352E10AF9EE43C76783D282FDABD (void);
// 0x000003A8 System.Void FannyPackSelector.FannyPackSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void FannyPackSelector_ValidateObject_mE1D8F2BABFFBC07274542F5599D6427D8B3E0633 (void);
// 0x000003A9 System.Void FannyPackSelector.FannyPackSelector::.ctor()
extern void FannyPackSelector__ctor_mF914501350A971F0281A67E067A4F92D20C956F3 (void);
// 0x000003AA System.Void EarringSelector.EarringSelector::OnValidate()
extern void EarringSelector_OnValidate_m62F2D1A3BC3DE3C0F7EB657E20A6DAB220BDFF78 (void);
// 0x000003AB System.Void EarringSelector.EarringSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void EarringSelector_ValidateObject_m59E684A6C10C1AC54AD60C6CEA410F6855CEF639 (void);
// 0x000003AC System.Void EarringSelector.EarringSelector::.ctor()
extern void EarringSelector__ctor_mFFD4A662D841B2A65FB597C73957D2444D8F2CE5 (void);
// 0x000003AD System.Void DressSelector.DressSelector::OnValidate()
extern void DressSelector_OnValidate_mCAC8DBE50697C0D7E3846486526F0C7EA6D46217 (void);
// 0x000003AE System.Void DressSelector.DressSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void DressSelector_ValidateObject_mEB23256034E0499F442C17EA20F09D751EC2600D (void);
// 0x000003AF System.Void DressSelector.DressSelector::.ctor()
extern void DressSelector__ctor_m670E3C253634E558B34A9732AB64520DCD06696C (void);
// 0x000003B0 System.Void ChokerSelector.ChokerSelector::OnValidate()
extern void ChokerSelector_OnValidate_mB1CA7DF81B5B87960C42DE004FE82287B3FE0E46 (void);
// 0x000003B1 System.Void ChokerSelector.ChokerSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void ChokerSelector_ValidateObject_mFC98F7D965E54205BFC2BE86F60DCF3F1D3A8FE1 (void);
// 0x000003B2 System.Void ChokerSelector.ChokerSelector::.ctor()
extern void ChokerSelector__ctor_m016221A498B7E59D50C0AE481D68FCFB880B532B (void);
// 0x000003B3 System.Void BraceletSelector.BraceletSelector::OnValidate()
extern void BraceletSelector_OnValidate_mEB192204463BC75C4D6B7BB37B16EB609632A41C (void);
// 0x000003B4 System.Void BraceletSelector.BraceletSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void BraceletSelector_ValidateObject_m121F7F19909C05C8A0D656825FFC7AD01A0B43BB (void);
// 0x000003B5 System.Void BraceletSelector.BraceletSelector::.ctor()
extern void BraceletSelector__ctor_m251082CED2D513DC80BB2F494BE068ADE32B6C8C (void);
// 0x000003B6 System.Void BeardSelector.BeardSelector::OnValidate()
extern void BeardSelector_OnValidate_m974104D6C24A45F9F886F9A2C08F54B083C29EE5 (void);
// 0x000003B7 System.Void BeardSelector.BeardSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void BeardSelector_ValidateObject_m97761D2F2089FF529B6983F7C9BD2E4F153A0672 (void);
// 0x000003B8 System.Void BeardSelector.BeardSelector::.ctor()
extern void BeardSelector__ctor_m9B72A71E554D9E745AD3EC00B93A5ED5F85778CE (void);
// 0x000003B9 System.Void ApronSelector.ApronSelector::OnValidate()
extern void ApronSelector_OnValidate_mC86932DA40F8F14DBDE386064737CF902112E9DE (void);
// 0x000003BA System.Void ApronSelector.ApronSelector::ValidateObject(System.Int32,UnityEngine.GameObject[])
extern void ApronSelector_ValidateObject_mC2997130CBE29322002C2961E282CB8073ABF454 (void);
// 0x000003BB System.Void ApronSelector.ApronSelector::.ctor()
extern void ApronSelector__ctor_m89AA5955922444256B6DE80D514E75A5BA74B2A4 (void);
// 0x000003BC System.Char TMPro.TMP_DigitValidator::Validate(System.String&,System.Int32&,System.Char)
extern void TMP_DigitValidator_Validate_m786CF8A4D85EB9E1BE8785A58007F8796991BDB9 (void);
// 0x000003BD System.Void TMPro.TMP_DigitValidator::.ctor()
extern void TMP_DigitValidator__ctor_m9DC5F1168E5F4963C063C88384ADEBA8980BBFE0 (void);
// 0x000003BE System.Char TMPro.TMP_PhoneNumberValidator::Validate(System.String&,System.Int32&,System.Char)
extern void TMP_PhoneNumberValidator_Validate_mE50FE1DE042CE58055C824840D77FCDA6A2AF4D3 (void);
// 0x000003BF System.Void TMPro.TMP_PhoneNumberValidator::.ctor()
extern void TMP_PhoneNumberValidator__ctor_m70833F265A016119F88136746B4C59F45B5E067D (void);
// 0x000003C0 TMPro.TMP_TextEventHandler/CharacterSelectionEvent TMPro.TMP_TextEventHandler::get_onCharacterSelection()
extern void TMP_TextEventHandler_get_onCharacterSelection_mA62049738125E3C48405E6DFF09E2D42300BE8C3 (void);
// 0x000003C1 System.Void TMPro.TMP_TextEventHandler::set_onCharacterSelection(TMPro.TMP_TextEventHandler/CharacterSelectionEvent)
extern void TMP_TextEventHandler_set_onCharacterSelection_m6B85C54F4E751BF080324D94FB8DA6286CD5A43C (void);
// 0x000003C2 TMPro.TMP_TextEventHandler/SpriteSelectionEvent TMPro.TMP_TextEventHandler::get_onSpriteSelection()
extern void TMP_TextEventHandler_get_onSpriteSelection_m95CDEB7394FFF38F310717EEEFDCD481D96A5E82 (void);
// 0x000003C3 System.Void TMPro.TMP_TextEventHandler::set_onSpriteSelection(TMPro.TMP_TextEventHandler/SpriteSelectionEvent)
extern void TMP_TextEventHandler_set_onSpriteSelection_mFFBD9D70A791A3F2065C1063F258465EDA8AC2C5 (void);
// 0x000003C4 TMPro.TMP_TextEventHandler/WordSelectionEvent TMPro.TMP_TextEventHandler::get_onWordSelection()
extern void TMP_TextEventHandler_get_onWordSelection_mF22771B4213EEB3AEFCDA390A4FF28FED5D9184C (void);
// 0x000003C5 System.Void TMPro.TMP_TextEventHandler::set_onWordSelection(TMPro.TMP_TextEventHandler/WordSelectionEvent)
extern void TMP_TextEventHandler_set_onWordSelection_mA7EB31AF14EAADD968857DDAC994F7728B7B02E3 (void);
// 0x000003C6 TMPro.TMP_TextEventHandler/LineSelectionEvent TMPro.TMP_TextEventHandler::get_onLineSelection()
extern void TMP_TextEventHandler_get_onLineSelection_mDDF07E7000993FCD6EAF2FBD2D2226EB66273908 (void);
// 0x000003C7 System.Void TMPro.TMP_TextEventHandler::set_onLineSelection(TMPro.TMP_TextEventHandler/LineSelectionEvent)
extern void TMP_TextEventHandler_set_onLineSelection_m098580AA8098939290113692072E18F9A293B427 (void);
// 0x000003C8 TMPro.TMP_TextEventHandler/LinkSelectionEvent TMPro.TMP_TextEventHandler::get_onLinkSelection()
extern void TMP_TextEventHandler_get_onLinkSelection_m87FB9EABE7F917B2F910A18A3B5F1AE3020D976D (void);
// 0x000003C9 System.Void TMPro.TMP_TextEventHandler::set_onLinkSelection(TMPro.TMP_TextEventHandler/LinkSelectionEvent)
extern void TMP_TextEventHandler_set_onLinkSelection_m6741C71F7E218C744CD7AA18B7456382E4B703FF (void);
// 0x000003CA System.Void TMPro.TMP_TextEventHandler::Awake()
extern void TMP_TextEventHandler_Awake_mE2D7EB8218B248F11BE54C507396B9B6B12E0052 (void);
// 0x000003CB System.Void TMPro.TMP_TextEventHandler::LateUpdate()
extern void TMP_TextEventHandler_LateUpdate_mBF0056A3C00834477F7D221BEE17C26784559DE1 (void);
// 0x000003CC System.Void TMPro.TMP_TextEventHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextEventHandler_OnPointerEnter_mF5B4CCF0C9F2EFE24B6D4C7B31C620C91ABBC07A (void);
// 0x000003CD System.Void TMPro.TMP_TextEventHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextEventHandler_OnPointerExit_mC0561024D04FED2D026BEB3EC183550092823AE6 (void);
// 0x000003CE System.Void TMPro.TMP_TextEventHandler::SendOnCharacterSelection(System.Char,System.Int32)
extern void TMP_TextEventHandler_SendOnCharacterSelection_m5A891393BC3211CFEF2390B5E9899129CBDAC189 (void);
// 0x000003CF System.Void TMPro.TMP_TextEventHandler::SendOnSpriteSelection(System.Char,System.Int32)
extern void TMP_TextEventHandler_SendOnSpriteSelection_m8242C5F9626A3C1330927FEACF3ECAD287500475 (void);
// 0x000003D0 System.Void TMPro.TMP_TextEventHandler::SendOnWordSelection(System.String,System.Int32,System.Int32)
extern void TMP_TextEventHandler_SendOnWordSelection_mCB9E9ACB06AC524273C163743C9191CAF9C1FD33 (void);
// 0x000003D1 System.Void TMPro.TMP_TextEventHandler::SendOnLineSelection(System.String,System.Int32,System.Int32)
extern void TMP_TextEventHandler_SendOnLineSelection_mF0691C407CA44C2E8F2D7CD6C9C2099693CBE7A6 (void);
// 0x000003D2 System.Void TMPro.TMP_TextEventHandler::SendOnLinkSelection(System.String,System.String,System.Int32)
extern void TMP_TextEventHandler_SendOnLinkSelection_m2809D6FFF57FAE45DC5BB4DD579328535E255A02 (void);
// 0x000003D3 System.Void TMPro.TMP_TextEventHandler::.ctor()
extern void TMP_TextEventHandler__ctor_mADE4C28CAE14991CF0B1CC1A9D0EBAF0CF1107AB (void);
// 0x000003D4 System.Void TMPro.TMP_TextEventHandler/CharacterSelectionEvent::.ctor()
extern void CharacterSelectionEvent__ctor_m054FE9253D3C4478F57DE900A15AC9A61EC3C11E (void);
// 0x000003D5 System.Void TMPro.TMP_TextEventHandler/SpriteSelectionEvent::.ctor()
extern void SpriteSelectionEvent__ctor_m89C1D1F720F140491B28D9B32B0C7202EE8C4963 (void);
// 0x000003D6 System.Void TMPro.TMP_TextEventHandler/WordSelectionEvent::.ctor()
extern void WordSelectionEvent__ctor_m3F52F327A9627042EDB065C1080CEB764F1154F2 (void);
// 0x000003D7 System.Void TMPro.TMP_TextEventHandler/LineSelectionEvent::.ctor()
extern void LineSelectionEvent__ctor_m419828B3E32BC3F6F5AAC88D7B90CF50A74C80B2 (void);
// 0x000003D8 System.Void TMPro.TMP_TextEventHandler/LinkSelectionEvent::.ctor()
extern void LinkSelectionEvent__ctor_m4083D6FF46F61AAF956F77FFE849B5166E2579BC (void);
// 0x000003D9 System.Collections.IEnumerator TMPro.Examples.Benchmark01::Start()
extern void Benchmark01_Start_m6CF91B0D99B3AC9317731D0C08B2EDA6AA56B9E9 (void);
// 0x000003DA System.Void TMPro.Examples.Benchmark01::.ctor()
extern void Benchmark01__ctor_m9E12F5F809E8FF4A6EEFCDB016C1F884716347C4 (void);
// 0x000003DB System.Void TMPro.Examples.Benchmark01/<Start>d__10::.ctor(System.Int32)
extern void U3CStartU3Ed__10__ctor_m242187966C9D563957FB0F76C467B25C25D91D69 (void);
// 0x000003DC System.Void TMPro.Examples.Benchmark01/<Start>d__10::System.IDisposable.Dispose()
extern void U3CStartU3Ed__10_System_IDisposable_Dispose_m7AD303D116E090426086312CD69BFA256CD28B0D (void);
// 0x000003DD System.Boolean TMPro.Examples.Benchmark01/<Start>d__10::MoveNext()
extern void U3CStartU3Ed__10_MoveNext_m5F93878ED8166F8F4507EE8353856FAEABBBF1C9 (void);
// 0x000003DE System.Object TMPro.Examples.Benchmark01/<Start>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8F5CE0A24226CB5F890D4C2A9FAD81A2696CE6F6 (void);
// 0x000003DF System.Void TMPro.Examples.Benchmark01/<Start>d__10::System.Collections.IEnumerator.Reset()
extern void U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_m553F892690ED74A33F57B1359743D31F8BB93C2A (void);
// 0x000003E0 System.Object TMPro.Examples.Benchmark01/<Start>d__10::System.Collections.IEnumerator.get_Current()
extern void U3CStartU3Ed__10_System_Collections_IEnumerator_get_Current_m50D65AEFE4D08E48AC72E017E00CD43273E1BDBD (void);
// 0x000003E1 System.Collections.IEnumerator TMPro.Examples.Benchmark01_UGUI::Start()
extern void Benchmark01_UGUI_Start_m565A619941AAFFC17BB16A4A73DF63F7E54E3AFA (void);
// 0x000003E2 System.Void TMPro.Examples.Benchmark01_UGUI::.ctor()
extern void Benchmark01_UGUI__ctor_m9DCE74210552C6961BF7460C1F812E484771F8EB (void);
// 0x000003E3 System.Void TMPro.Examples.Benchmark01_UGUI/<Start>d__10::.ctor(System.Int32)
extern void U3CStartU3Ed__10__ctor_m515F107569D5BDE7C81F5DFDAB4A298A5399EB5A (void);
// 0x000003E4 System.Void TMPro.Examples.Benchmark01_UGUI/<Start>d__10::System.IDisposable.Dispose()
extern void U3CStartU3Ed__10_System_IDisposable_Dispose_mFFD5DC6FCF8EC489FF249BE7F91D4336F2AD76AC (void);
// 0x000003E5 System.Boolean TMPro.Examples.Benchmark01_UGUI/<Start>d__10::MoveNext()
extern void U3CStartU3Ed__10_MoveNext_mDCA96D0D1226C44C15F1FD85518F0711E6B395D9 (void);
// 0x000003E6 System.Object TMPro.Examples.Benchmark01_UGUI/<Start>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m109B5747CD8D1CF40DAC526C54BFB07223E1FB46 (void);
// 0x000003E7 System.Void TMPro.Examples.Benchmark01_UGUI/<Start>d__10::System.Collections.IEnumerator.Reset()
extern void U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_mC9F90586F057E3728D9F93BB0E12197C9B994EEA (void);
// 0x000003E8 System.Object TMPro.Examples.Benchmark01_UGUI/<Start>d__10::System.Collections.IEnumerator.get_Current()
extern void U3CStartU3Ed__10_System_Collections_IEnumerator_get_Current_mA4DCEFD742C012A03C20EF42A873B5BFF07AF87A (void);
// 0x000003E9 System.Void TMPro.Examples.Benchmark02::Start()
extern void Benchmark02_Start_mB56F21A9861A3DAF9F4E7F1DD4A023E05B379E29 (void);
// 0x000003EA System.Void TMPro.Examples.Benchmark02::.ctor()
extern void Benchmark02__ctor_mE5DCB1CF4C1FDBA742B51B11427B9DE209630BF1 (void);
// 0x000003EB System.Void TMPro.Examples.Benchmark03::Awake()
extern void Benchmark03_Awake_mDEE8E96AE811C5A84CB2C04440CD4662E2F918D3 (void);
// 0x000003EC System.Void TMPro.Examples.Benchmark03::Start()
extern void Benchmark03_Start_mCCFD9402E218265F6D34A1EA7ACCD3AD3D80380D (void);
// 0x000003ED System.Void TMPro.Examples.Benchmark03::.ctor()
extern void Benchmark03__ctor_m8A29BB2CC6375B2D3D57B5A90D18F2435352E5F6 (void);
// 0x000003EE System.Void TMPro.Examples.Benchmark04::Start()
extern void Benchmark04_Start_mD2F5056019DD08B3DB897F6D194E86AB66E92F90 (void);
// 0x000003EF System.Void TMPro.Examples.Benchmark04::.ctor()
extern void Benchmark04__ctor_m282E4E495D8D1921A87481729549B68BEDAD2D27 (void);
// 0x000003F0 System.Void TMPro.Examples.CameraController::Awake()
extern void CameraController_Awake_m2D75756734457ADE0F15F191B63521A47C426788 (void);
// 0x000003F1 System.Void TMPro.Examples.CameraController::Start()
extern void CameraController_Start_m749E20374F32FF190EC51D70C717A8117934F2A5 (void);
// 0x000003F2 System.Void TMPro.Examples.CameraController::LateUpdate()
extern void CameraController_LateUpdate_m07E7F5C7D91713F8BB489480304D130570D7858F (void);
// 0x000003F3 System.Void TMPro.Examples.CameraController::GetPlayerInput()
extern void CameraController_GetPlayerInput_m31AE86C54785402EB078A40F37D83FEA9216388F (void);
// 0x000003F4 System.Void TMPro.Examples.CameraController::.ctor()
extern void CameraController__ctor_mE37608FBFBF61F76A1E0EEACF79B040321476878 (void);
// 0x000003F5 System.Void TMPro.Examples.ObjectSpin::Awake()
extern void ObjectSpin_Awake_mC05FEB5A72FED289171C58787FE09DBD9356FC72 (void);
// 0x000003F6 System.Void TMPro.Examples.ObjectSpin::Update()
extern void ObjectSpin_Update_m7FB0886C3E6D76C0020E4D38DC1C44AB70BF3695 (void);
// 0x000003F7 System.Void TMPro.Examples.ObjectSpin::.ctor()
extern void ObjectSpin__ctor_mA786C14AE887FF4012A35FAB3DF59ECF6A77835A (void);
// 0x000003F8 System.Void TMPro.Examples.ShaderPropAnimator::Awake()
extern void ShaderPropAnimator_Awake_m3D158D58F1840CBDA3B887326275893121E31371 (void);
// 0x000003F9 System.Void TMPro.Examples.ShaderPropAnimator::Start()
extern void ShaderPropAnimator_Start_mEF0B5D3EE00206199ABB80CE893AA85DF3FE5C88 (void);
// 0x000003FA System.Collections.IEnumerator TMPro.Examples.ShaderPropAnimator::AnimateProperties()
extern void ShaderPropAnimator_AnimateProperties_m9F466F9C9554AA7488F4607E7FAC9A5C61F46D56 (void);
// 0x000003FB System.Void TMPro.Examples.ShaderPropAnimator::.ctor()
extern void ShaderPropAnimator__ctor_m51C29C66EFD7FCA3AE68CDEFD38A4A89BF48220B (void);
// 0x000003FC System.Void TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::.ctor(System.Int32)
extern void U3CAnimatePropertiesU3Ed__6__ctor_m2B0F8A634812D7FE998DD35188C5F07797E4FB0D (void);
// 0x000003FD System.Void TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::System.IDisposable.Dispose()
extern void U3CAnimatePropertiesU3Ed__6_System_IDisposable_Dispose_mCF53541AABFDC14249868837689AC287470F4E71 (void);
// 0x000003FE System.Boolean TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::MoveNext()
extern void U3CAnimatePropertiesU3Ed__6_MoveNext_mB9586A9B61959C3BC38EFB8FC83109785F93F6AC (void);
// 0x000003FF System.Object TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimatePropertiesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A34F7423FA726A91524CBA0CDD2A25E4AF8EE95 (void);
// 0x00000400 System.Void TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::System.Collections.IEnumerator.Reset()
extern void U3CAnimatePropertiesU3Ed__6_System_Collections_IEnumerator_Reset_m1C76BF8EAC2CDC2BAC58755622763B9318DA51CA (void);
// 0x00000401 System.Object TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CAnimatePropertiesU3Ed__6_System_Collections_IEnumerator_get_Current_m289720A67EB6696F350EAC41DAAE3B917031B7EA (void);
// 0x00000402 System.Void TMPro.Examples.SimpleScript::Start()
extern void SimpleScript_Start_mC4159EF79F863FBD86AEA2B81D86FDF04834A6F8 (void);
// 0x00000403 System.Void TMPro.Examples.SimpleScript::Update()
extern void SimpleScript_Update_mBD8A31D53D01FEBB9B432077599239AC6A5DEAFE (void);
// 0x00000404 System.Void TMPro.Examples.SimpleScript::.ctor()
extern void SimpleScript__ctor_mC91E912195EEE18292A8FCA7650739E3DDB81807 (void);
// 0x00000405 System.Void TMPro.Examples.SkewTextExample::Awake()
extern void SkewTextExample_Awake_m2D48E0903620C2D870D5176FCFD12A8989801C93 (void);
// 0x00000406 System.Void TMPro.Examples.SkewTextExample::Start()
extern void SkewTextExample_Start_m7577B96B07C4EB0666BF6F028074176258009690 (void);
// 0x00000407 UnityEngine.AnimationCurve TMPro.Examples.SkewTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
extern void SkewTextExample_CopyAnimationCurve_mD2C2C4CA7AFBAAC9F4B04CB2896DB9B32B015ACB (void);
// 0x00000408 System.Collections.IEnumerator TMPro.Examples.SkewTextExample::WarpText()
extern void SkewTextExample_WarpText_m462DE1568957770D72704E93D2461D8371C0D362 (void);
// 0x00000409 System.Void TMPro.Examples.SkewTextExample::.ctor()
extern void SkewTextExample__ctor_m711325FB390A6DFA994B6ADF746C9EBF846A0A22 (void);
// 0x0000040A System.Void TMPro.Examples.SkewTextExample/<WarpText>d__7::.ctor(System.Int32)
extern void U3CWarpTextU3Ed__7__ctor_m39944C7E44F317ACDEC971C8FF2DEC8EA1CCC1C2 (void);
// 0x0000040B System.Void TMPro.Examples.SkewTextExample/<WarpText>d__7::System.IDisposable.Dispose()
extern void U3CWarpTextU3Ed__7_System_IDisposable_Dispose_m54C900BFB8433103FA97A4E50B2C941D431B5A51 (void);
// 0x0000040C System.Boolean TMPro.Examples.SkewTextExample/<WarpText>d__7::MoveNext()
extern void U3CWarpTextU3Ed__7_MoveNext_m50CEEC92FE0C83768B366E9F9B5B1C9DEF85928E (void);
// 0x0000040D System.Object TMPro.Examples.SkewTextExample/<WarpText>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CWarpTextU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79CB1783D2DD0399E051969089A36819EDC66FCB (void);
// 0x0000040E System.Void TMPro.Examples.SkewTextExample/<WarpText>d__7::System.Collections.IEnumerator.Reset()
extern void U3CWarpTextU3Ed__7_System_Collections_IEnumerator_Reset_mB6C5974E8F57160AE544E1D2FD44621EEF3ACAB5 (void);
// 0x0000040F System.Object TMPro.Examples.SkewTextExample/<WarpText>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CWarpTextU3Ed__7_System_Collections_IEnumerator_get_Current_m5BDAFBB20F42A6E9EC65B6A2365F5AD98F42A1C5 (void);
// 0x00000410 System.Void TMPro.Examples.TeleType::Awake()
extern void TeleType_Awake_m8D56A3C1E06AD96B35B88C3AA8C61FB2A03E627D (void);
// 0x00000411 System.Collections.IEnumerator TMPro.Examples.TeleType::Start()
extern void TeleType_Start_m3BFE1E2B1BB5ED247DED9DBEF293FCCBD63760C6 (void);
// 0x00000412 System.Void TMPro.Examples.TeleType::.ctor()
extern void TeleType__ctor_m824BBE09CC217EB037FFB36756726A9C946526D0 (void);
// 0x00000413 System.Void TMPro.Examples.TeleType/<Start>d__4::.ctor(System.Int32)
extern void U3CStartU3Ed__4__ctor_m7CB9C7DF4657B7B70F6ED6EEB00C0F422D8B0CAA (void);
// 0x00000414 System.Void TMPro.Examples.TeleType/<Start>d__4::System.IDisposable.Dispose()
extern void U3CStartU3Ed__4_System_IDisposable_Dispose_mA57DA4D469190B581B5DCB406E9FB70DD33511F2 (void);
// 0x00000415 System.Boolean TMPro.Examples.TeleType/<Start>d__4::MoveNext()
extern void U3CStartU3Ed__4_MoveNext_mE1C3343B7258BAADC74C1A060E71C28951D39D45 (void);
// 0x00000416 System.Object TMPro.Examples.TeleType/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1819CF068B92E7EA9EEFD7F93CA316F38DF644BA (void);
// 0x00000417 System.Void TMPro.Examples.TeleType/<Start>d__4::System.Collections.IEnumerator.Reset()
extern void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m9B7AEE80C1E70D2D2FF5811A54AFD6189CD7F5A9 (void);
// 0x00000418 System.Object TMPro.Examples.TeleType/<Start>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_m5C22C5D235424F0613697F05E72ADB4D1A3420C8 (void);
// 0x00000419 System.Void TMPro.Examples.TextConsoleSimulator::Awake()
extern void TextConsoleSimulator_Awake_m55D28DC1F590D98621B0284B53C8A22D07CD3F7C (void);
// 0x0000041A System.Void TMPro.Examples.TextConsoleSimulator::Start()
extern void TextConsoleSimulator_Start_m5667F64AE1F48EBA2FF1B3D2D53E2AFCAB738B39 (void);
// 0x0000041B System.Void TMPro.Examples.TextConsoleSimulator::OnEnable()
extern void TextConsoleSimulator_OnEnable_mDF58D349E4D62866410AAA376BE5BBAE4153FF95 (void);
// 0x0000041C System.Void TMPro.Examples.TextConsoleSimulator::OnDisable()
extern void TextConsoleSimulator_OnDisable_m4B3A741D6C5279590453148419B422E8D7314689 (void);
// 0x0000041D System.Void TMPro.Examples.TextConsoleSimulator::ON_TEXT_CHANGED(UnityEngine.Object)
extern void TextConsoleSimulator_ON_TEXT_CHANGED_m050ECF4852B6A82000133662D6502577DFD57C3A (void);
// 0x0000041E System.Collections.IEnumerator TMPro.Examples.TextConsoleSimulator::RevealCharacters(TMPro.TMP_Text)
extern void TextConsoleSimulator_RevealCharacters_mAA4D3653F05692839313CE180250A44378024E52 (void);
// 0x0000041F System.Collections.IEnumerator TMPro.Examples.TextConsoleSimulator::RevealWords(TMPro.TMP_Text)
extern void TextConsoleSimulator_RevealWords_m0E52802FD4239665709F086E6E0B235CDE67E9B1 (void);
// 0x00000420 System.Void TMPro.Examples.TextConsoleSimulator::.ctor()
extern void TextConsoleSimulator__ctor_mBDDE8A2DCED8B140D78D5FE560897665753AB025 (void);
// 0x00000421 System.Void TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::.ctor(System.Int32)
extern void U3CRevealCharactersU3Ed__7__ctor_m40A144070AB46560F2B3919EA5CB8BD51F8DDF45 (void);
// 0x00000422 System.Void TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.IDisposable.Dispose()
extern void U3CRevealCharactersU3Ed__7_System_IDisposable_Dispose_m7942532282ACF3B429FAD926284352907FFE087B (void);
// 0x00000423 System.Boolean TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::MoveNext()
extern void U3CRevealCharactersU3Ed__7_MoveNext_m2D07AF9391894BCE39624FA2DCFA87AC6F8119AE (void);
// 0x00000424 System.Object TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRevealCharactersU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m754C680B2751A9F05DBF253431A3CB42885F7854 (void);
// 0x00000425 System.Void TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.Collections.IEnumerator.Reset()
extern void U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_Reset_mD12057609EFCBCA8E7B61B0421D4A7C5A206C8C3 (void);
// 0x00000426 System.Object TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_get_Current_m9FD7DAB922AE6A58166112C295ABFF6E19E1D186 (void);
// 0x00000427 System.Void TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::.ctor(System.Int32)
extern void U3CRevealWordsU3Ed__8__ctor_mDF8D4C69F022D088AFC0E109FC0DBE0C9B938CAC (void);
// 0x00000428 System.Void TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.IDisposable.Dispose()
extern void U3CRevealWordsU3Ed__8_System_IDisposable_Dispose_m2F2F21F38D2DD8AE3D066E64850D404497A131C5 (void);
// 0x00000429 System.Boolean TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::MoveNext()
extern void U3CRevealWordsU3Ed__8_MoveNext_mC5102728A86DCB2171E54CFEDFA7BE6F29AB355C (void);
// 0x0000042A System.Object TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRevealWordsU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D9A6269831C00345D245D0EED2E5FC20BBF4683 (void);
// 0x0000042B System.Void TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.Collections.IEnumerator.Reset()
extern void U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_Reset_mE5E0678716735BDF0D632FE43E392981E75A1C4D (void);
// 0x0000042C System.Object TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.Collections.IEnumerator.get_Current()
extern void U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_get_Current_m3E9D4960A972BD7601F6454E6F9A614AA21D553E (void);
// 0x0000042D System.Void TMPro.Examples.TextMeshProFloatingText::Awake()
extern void TextMeshProFloatingText_Awake_m600F1825C26BB683047156FD815AE4376D2672F2 (void);
// 0x0000042E System.Void TMPro.Examples.TextMeshProFloatingText::Start()
extern void TextMeshProFloatingText_Start_m8121246A4310A0014ECA36144B9DCE093FE8AE49 (void);
// 0x0000042F System.Collections.IEnumerator TMPro.Examples.TextMeshProFloatingText::DisplayTextMeshProFloatingText()
extern void TextMeshProFloatingText_DisplayTextMeshProFloatingText_mA1E370089458CD380E9BA7740C2BC2032F084148 (void);
// 0x00000430 System.Collections.IEnumerator TMPro.Examples.TextMeshProFloatingText::DisplayTextMeshFloatingText()
extern void TextMeshProFloatingText_DisplayTextMeshFloatingText_mA02B20CF33E43FE99FD5F1B90F7F350262F0BEBE (void);
// 0x00000431 System.Void TMPro.Examples.TextMeshProFloatingText::.ctor()
extern void TextMeshProFloatingText__ctor_mD08AF0FB6944A51BC6EA15D6BE4E33AA4A916E3E (void);
// 0x00000432 System.Void TMPro.Examples.TextMeshProFloatingText::.cctor()
extern void TextMeshProFloatingText__cctor_m352D68463FC9600F9139AD78F0176368562F63C6 (void);
// 0x00000433 System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__15::.ctor(System.Int32)
extern void U3CDisplayTextMeshProFloatingTextU3Ed__15__ctor_mD3C24C6814482113FD231827E550FBBCC91424A0 (void);
// 0x00000434 System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__15::System.IDisposable.Dispose()
extern void U3CDisplayTextMeshProFloatingTextU3Ed__15_System_IDisposable_Dispose_m83285E807FA4462B99B68D1EB12B2360238C53EB (void);
// 0x00000435 System.Boolean TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__15::MoveNext()
extern void U3CDisplayTextMeshProFloatingTextU3Ed__15_MoveNext_m588E025C05E03684A11ABC91B50734A349D28CC8 (void);
// 0x00000436 System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDisplayTextMeshProFloatingTextU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2412DC176F8CA3096658EB0E27AC28218DAEC03A (void);
// 0x00000437 System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__15::System.Collections.IEnumerator.Reset()
extern void U3CDisplayTextMeshProFloatingTextU3Ed__15_System_Collections_IEnumerator_Reset_mCCE19093B7355F3E23834E27A8517661DF833797 (void);
// 0x00000438 System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__15::System.Collections.IEnumerator.get_Current()
extern void U3CDisplayTextMeshProFloatingTextU3Ed__15_System_Collections_IEnumerator_get_Current_mE53E0B4DBE6AF5DAC110C3F626B34C5965845E54 (void);
// 0x00000439 System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__16::.ctor(System.Int32)
extern void U3CDisplayTextMeshFloatingTextU3Ed__16__ctor_m1ECB51A93EE3B236301948784A3260FD72814923 (void);
// 0x0000043A System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__16::System.IDisposable.Dispose()
extern void U3CDisplayTextMeshFloatingTextU3Ed__16_System_IDisposable_Dispose_m461761745A9C5FF4F7995C3DB33DB43848AEB05B (void);
// 0x0000043B System.Boolean TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__16::MoveNext()
extern void U3CDisplayTextMeshFloatingTextU3Ed__16_MoveNext_m1FC162511DF31A9CDBD0101083FBCB11380554C4 (void);
// 0x0000043C System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDisplayTextMeshFloatingTextU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6A5E330ACDAD25422A7D642301F58E6C1EE1B041 (void);
// 0x0000043D System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__16::System.Collections.IEnumerator.Reset()
extern void U3CDisplayTextMeshFloatingTextU3Ed__16_System_Collections_IEnumerator_Reset_m5A7148435B35A0A84329416FF765D45F6AA0F4E1 (void);
// 0x0000043E System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__16::System.Collections.IEnumerator.get_Current()
extern void U3CDisplayTextMeshFloatingTextU3Ed__16_System_Collections_IEnumerator_get_Current_m066140B8D4CD5DE3527A3A05183AE89B487B5D55 (void);
// 0x0000043F System.Void TMPro.Examples.TextMeshSpawner::Awake()
extern void TextMeshSpawner_Awake_m9A84A570D2582918A6B1287139527E9AB2CF088D (void);
// 0x00000440 System.Void TMPro.Examples.TextMeshSpawner::Start()
extern void TextMeshSpawner_Start_m3EE98071CA27A18904B859A0A6B215BDFEB50A66 (void);
// 0x00000441 System.Void TMPro.Examples.TextMeshSpawner::.ctor()
extern void TextMeshSpawner__ctor_m8409A62C31C4A6B6CEC2F48F1DC9777460C28233 (void);
// 0x00000442 System.Void TMPro.Examples.TMPro_InstructionOverlay::Awake()
extern void TMPro_InstructionOverlay_Awake_m0F92D44F62A9AC086DE3DF1E4C7BFAF645EE7084 (void);
// 0x00000443 System.Void TMPro.Examples.TMPro_InstructionOverlay::Set_FrameCounter_Position(TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions)
extern void TMPro_InstructionOverlay_Set_FrameCounter_Position_m3CC1B812C740BAE87C6B5CA94DC64E6131F42A7C (void);
// 0x00000444 System.Void TMPro.Examples.TMPro_InstructionOverlay::.ctor()
extern void TMPro_InstructionOverlay__ctor_m247258528E488171765F77A9A3C6B7E079E64839 (void);
// 0x00000445 System.Void TMPro.Examples.TMP_ExampleScript_01::Awake()
extern void TMP_ExampleScript_01_Awake_m6E620605AE9CCC3789A2D5CFD841E5DAB8592063 (void);
// 0x00000446 System.Void TMPro.Examples.TMP_ExampleScript_01::Update()
extern void TMP_ExampleScript_01_Update_m3D4A9AB04728F0ABD4C7C8A462E2C811308D97A1 (void);
// 0x00000447 System.Void TMPro.Examples.TMP_ExampleScript_01::.ctor()
extern void TMP_ExampleScript_01__ctor_m43F9206FDB1606CD28F1A441188E777546CFEA2A (void);
// 0x00000448 System.Void TMPro.Examples.TMP_FrameRateCounter::Awake()
extern void TMP_FrameRateCounter_Awake_m99156EF53E5848DE83107BFAC803C33DC964265C (void);
// 0x00000449 System.Void TMPro.Examples.TMP_FrameRateCounter::Start()
extern void TMP_FrameRateCounter_Start_m9B5D0A86D174DA019F3EB5C6E9BD54634B2F909A (void);
// 0x0000044A System.Void TMPro.Examples.TMP_FrameRateCounter::Update()
extern void TMP_FrameRateCounter_Update_m5251EE9AC9DCB99D0871EE83624C8A9012E6A079 (void);
// 0x0000044B System.Void TMPro.Examples.TMP_FrameRateCounter::Set_FrameCounter_Position(TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions)
extern void TMP_FrameRateCounter_Set_FrameCounter_Position_m1CC40A8236B2161050D19C4B2EBFF34B96645723 (void);
// 0x0000044C System.Void TMPro.Examples.TMP_FrameRateCounter::.ctor()
extern void TMP_FrameRateCounter__ctor_mD8804AE37CED37A01DF943624D3C2C48FBC9AE43 (void);
// 0x0000044D System.Void TMPro.Examples.TMP_TextEventCheck::OnEnable()
extern void TMP_TextEventCheck_OnEnable_mABF0C00DDBB37230534C49AD9CA342D96757AA3E (void);
// 0x0000044E System.Void TMPro.Examples.TMP_TextEventCheck::OnDisable()
extern void TMP_TextEventCheck_OnDisable_m4AE76C19CBF131CB80B73A7C71378CA063CFC4C6 (void);
// 0x0000044F System.Void TMPro.Examples.TMP_TextEventCheck::OnCharacterSelection(System.Char,System.Int32)
extern void TMP_TextEventCheck_OnCharacterSelection_mB421E2CFB617397137CF1AE9CC2F49E46EB3F0AE (void);
// 0x00000450 System.Void TMPro.Examples.TMP_TextEventCheck::OnSpriteSelection(System.Char,System.Int32)
extern void TMP_TextEventCheck_OnSpriteSelection_mD88D899DE3321CC15502BB1174709BE290AB6215 (void);
// 0x00000451 System.Void TMPro.Examples.TMP_TextEventCheck::OnWordSelection(System.String,System.Int32,System.Int32)
extern void TMP_TextEventCheck_OnWordSelection_m180B102DAED1F3313F2F4BB6CF588FF96C8CAB79 (void);
// 0x00000452 System.Void TMPro.Examples.TMP_TextEventCheck::OnLineSelection(System.String,System.Int32,System.Int32)
extern void TMP_TextEventCheck_OnLineSelection_mE0538FFAFE04A286F937907D0E4664338DCF1559 (void);
// 0x00000453 System.Void TMPro.Examples.TMP_TextEventCheck::OnLinkSelection(System.String,System.String,System.Int32)
extern void TMP_TextEventCheck_OnLinkSelection_m72BF9241651D44805590F1DBADF2FD864D209779 (void);
// 0x00000454 System.Void TMPro.Examples.TMP_TextEventCheck::.ctor()
extern void TMP_TextEventCheck__ctor_m8F6CDB8774BDF6C6B909919393AC0290BA2BB0AF (void);
// 0x00000455 System.Void TMPro.Examples.TMP_TextInfoDebugTool::.ctor()
extern void TMP_TextInfoDebugTool__ctor_m54C6EE99B1DC2B4DE1F8E870974B3B41B970C37E (void);
// 0x00000456 System.Void TMPro.Examples.TMP_TextSelector_A::Awake()
extern void TMP_TextSelector_A_Awake_m662ED2E3CDB7AE16174109344A01A50AF3C44797 (void);
// 0x00000457 System.Void TMPro.Examples.TMP_TextSelector_A::LateUpdate()
extern void TMP_TextSelector_A_LateUpdate_m1A711EC87962C6C5A7157414CD059D984D3BD55B (void);
// 0x00000458 System.Void TMPro.Examples.TMP_TextSelector_A::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextSelector_A_OnPointerEnter_m747F05CBEF90BF713BF726E47CA37DC86D9B439A (void);
// 0x00000459 System.Void TMPro.Examples.TMP_TextSelector_A::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextSelector_A_OnPointerExit_m5D7D8A07591506FB7291E84A951AB5C43DAA5503 (void);
// 0x0000045A System.Void TMPro.Examples.TMP_TextSelector_A::.ctor()
extern void TMP_TextSelector_A__ctor_m4C56A438A3140D5CF9C7AFB8466E11142F4FA3BE (void);
// 0x0000045B System.Void TMPro.Examples.TMP_TextSelector_B::Awake()
extern void TMP_TextSelector_B_Awake_m773D4C87E67823272DBF597B9CADE82DD3BFFD87 (void);
// 0x0000045C System.Void TMPro.Examples.TMP_TextSelector_B::OnEnable()
extern void TMP_TextSelector_B_OnEnable_m8DA695DB0913F7123C4ADAFD5BEAB4424FA5861B (void);
// 0x0000045D System.Void TMPro.Examples.TMP_TextSelector_B::OnDisable()
extern void TMP_TextSelector_B_OnDisable_mF2EF7AE0E015218AB77936BD5FD6863F7788F11D (void);
// 0x0000045E System.Void TMPro.Examples.TMP_TextSelector_B::ON_TEXT_CHANGED(UnityEngine.Object)
extern void TMP_TextSelector_B_ON_TEXT_CHANGED_m5B53EF1608E98B6A56AAA386085A3216B35A51EE (void);
// 0x0000045F System.Void TMPro.Examples.TMP_TextSelector_B::LateUpdate()
extern void TMP_TextSelector_B_LateUpdate_mE1B3969D788695E37240927FC6B1827CC6DD5EFF (void);
// 0x00000460 System.Void TMPro.Examples.TMP_TextSelector_B::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextSelector_B_OnPointerEnter_mBAF5711E20E579D21258BD4040454A64E1134D98 (void);
// 0x00000461 System.Void TMPro.Examples.TMP_TextSelector_B::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextSelector_B_OnPointerExit_m40ED8F7E47FF6FD8B38BE96B2216267F61509D65 (void);
// 0x00000462 System.Void TMPro.Examples.TMP_TextSelector_B::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextSelector_B_OnPointerClick_m773B56D918B1D0F73C5ABC0EB22FD34D39AFBB97 (void);
// 0x00000463 System.Void TMPro.Examples.TMP_TextSelector_B::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern void TMP_TextSelector_B_OnPointerUp_mF409D728900872CC323B18DDA7F91265058BE772 (void);
// 0x00000464 System.Void TMPro.Examples.TMP_TextSelector_B::RestoreCachedVertexAttributes(System.Int32)
extern void TMP_TextSelector_B_RestoreCachedVertexAttributes_m1FD258EC7A53C8E1ECB18EB6FFEFC6239780C398 (void);
// 0x00000465 System.Void TMPro.Examples.TMP_TextSelector_B::.ctor()
extern void TMP_TextSelector_B__ctor_mB45DD6360094ADBEF5E8020E8C62404B7E45E301 (void);
// 0x00000466 System.Void TMPro.Examples.TMP_UiFrameRateCounter::Awake()
extern void TMP_UiFrameRateCounter_Awake_m3E0ECAD08FA25B61DD75F4D36EC3F1DE5A22A491 (void);
// 0x00000467 System.Void TMPro.Examples.TMP_UiFrameRateCounter::Start()
extern void TMP_UiFrameRateCounter_Start_m11EF02C330E5D834C41F009CF088A3150352567F (void);
// 0x00000468 System.Void TMPro.Examples.TMP_UiFrameRateCounter::Update()
extern void TMP_UiFrameRateCounter_Update_m568E467033B0FF7C67251895A0772CFA197789A3 (void);
// 0x00000469 System.Void TMPro.Examples.TMP_UiFrameRateCounter::Set_FrameCounter_Position(TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions)
extern void TMP_UiFrameRateCounter_Set_FrameCounter_Position_mAF25D6E90A6CB17EE041885B32579A2AEDBFCC36 (void);
// 0x0000046A System.Void TMPro.Examples.TMP_UiFrameRateCounter::.ctor()
extern void TMP_UiFrameRateCounter__ctor_mBF5305427799EBC515580C2747FE604A6DFEC848 (void);
// 0x0000046B System.Void TMPro.Examples.VertexColorCycler::Awake()
extern void VertexColorCycler_Awake_m8895A9C06DB3EC4379334601DC726F1AFAF543C1 (void);
// 0x0000046C System.Void TMPro.Examples.VertexColorCycler::Start()
extern void VertexColorCycler_Start_m36846DA72BFC7FDFA944A368C9DB62D17A15917B (void);
// 0x0000046D System.Collections.IEnumerator TMPro.Examples.VertexColorCycler::AnimateVertexColors()
extern void VertexColorCycler_AnimateVertexColors_m16733B3DFF4C0F625AA66B5DF9D3B04D723E49CC (void);
// 0x0000046E System.Void TMPro.Examples.VertexColorCycler::.ctor()
extern void VertexColorCycler__ctor_m673CA077DC5E935BABCEA79E5E70116E9934F4C1 (void);
// 0x0000046F System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::.ctor(System.Int32)
extern void U3CAnimateVertexColorsU3Ed__3__ctor_m0245999D5FAAF8855583609DB16CAF48E9450262 (void);
// 0x00000470 System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.IDisposable.Dispose()
extern void U3CAnimateVertexColorsU3Ed__3_System_IDisposable_Dispose_mF965F484C619EFA1359F7DB6495C1C79A89001BF (void);
// 0x00000471 System.Boolean TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::MoveNext()
extern void U3CAnimateVertexColorsU3Ed__3_MoveNext_m5C44B8CC0AB09A205BB1649931D2AC7C6F016E60 (void);
// 0x00000472 System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimateVertexColorsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF9600944C968C16121129C479F8B25D8E8B7FDD1 (void);
// 0x00000473 System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.IEnumerator.Reset()
extern void U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m319AC50F2DE1572FB7D7AF4F5F65958D01477899 (void);
// 0x00000474 System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_get_Current_mC19EC9CE0C245B49D987C18357571FF3462F1D2C (void);
// 0x00000475 System.Void TMPro.Examples.VertexJitter::Awake()
extern void VertexJitter_Awake_m0DF2AC9C728A15EEB427F1FE2426E3C31FBA544C (void);
// 0x00000476 System.Void TMPro.Examples.VertexJitter::OnEnable()
extern void VertexJitter_OnEnable_mCD5C1FDDBA809B04AC6F6CB00562D0AA45BC4354 (void);
// 0x00000477 System.Void TMPro.Examples.VertexJitter::OnDisable()
extern void VertexJitter_OnDisable_mB670406B3982BFC44CB6BB05A73F1BE877FDFAF2 (void);
// 0x00000478 System.Void TMPro.Examples.VertexJitter::Start()
extern void VertexJitter_Start_mDE6155803CF2B1E6CE0EBAE8DF7DB93601E1DD76 (void);
// 0x00000479 System.Void TMPro.Examples.VertexJitter::ON_TEXT_CHANGED(UnityEngine.Object)
extern void VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8 (void);
// 0x0000047A System.Collections.IEnumerator TMPro.Examples.VertexJitter::AnimateVertexColors()
extern void VertexJitter_AnimateVertexColors_m2A69F06CF58FA46B689BD4166DEF5AD15FA2FA88 (void);
// 0x0000047B System.Void TMPro.Examples.VertexJitter::.ctor()
extern void VertexJitter__ctor_m41E4682405B3C0B19779BA8CB77156D65D64716D (void);
// 0x0000047C System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::.ctor(System.Int32)
extern void U3CAnimateVertexColorsU3Ed__11__ctor_m10C4D98A634474BAA883419ED308835B7D91C01A (void);
// 0x0000047D System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
extern void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_mB3756FBFDD731F3CC1EFF9AB132FF5075C8411F8 (void);
// 0x0000047E System.Boolean TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::MoveNext()
extern void U3CAnimateVertexColorsU3Ed__11_MoveNext_mD694A3145B54B9C5EB351853752B9292DBFF0273 (void);
// 0x0000047F System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79C3A529011A51B9A994106D3C1271548B02D405 (void);
// 0x00000480 System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
extern void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m15291DCCCEC264095634B26DD6F24D52360BDAF0 (void);
// 0x00000481 System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
extern void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m0B8F21A4589C68BA16A8340938BB44C980260CC9 (void);
// 0x00000482 System.Void TMPro.Examples.VertexShakeA::Awake()
extern void VertexShakeA_Awake_m092957B0A67A153E7CD56A75A438087DE4806867 (void);
// 0x00000483 System.Void TMPro.Examples.VertexShakeA::OnEnable()
extern void VertexShakeA_OnEnable_m52E2A036C9EB2C1D633BA7F43E31C36983972304 (void);
// 0x00000484 System.Void TMPro.Examples.VertexShakeA::OnDisable()
extern void VertexShakeA_OnDisable_m52F58AF9438377D222543AA67CFF7B30FCCB0F23 (void);
// 0x00000485 System.Void TMPro.Examples.VertexShakeA::Start()
extern void VertexShakeA_Start_mDD8B5538BDFBC2BA242B997B879E7ED64ACAFC5E (void);
// 0x00000486 System.Void TMPro.Examples.VertexShakeA::ON_TEXT_CHANGED(UnityEngine.Object)
extern void VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77 (void);
// 0x00000487 System.Collections.IEnumerator TMPro.Examples.VertexShakeA::AnimateVertexColors()
extern void VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38 (void);
// 0x00000488 System.Void TMPro.Examples.VertexShakeA::.ctor()
extern void VertexShakeA__ctor_m63ED483A292CA310B90144E0779C0472AAC22CBB (void);
// 0x00000489 System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::.ctor(System.Int32)
extern void U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A (void);
// 0x0000048A System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
extern void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m74112773E1FD645722BC221FA5256331C068EAE7 (void);
// 0x0000048B System.Boolean TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::MoveNext()
extern void U3CAnimateVertexColorsU3Ed__11_MoveNext_mA6858F6CA14AAE3DFB7EA13748E10E063BBAB934 (void);
// 0x0000048C System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8DD4F3768C9025EFAC0BFDBB942FEF7953FB20BE (void);
// 0x0000048D System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
extern void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90 (void);
// 0x0000048E System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
extern void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m3106DAC17EF56701CBC9812DD031932B04BB730B (void);
// 0x0000048F System.Void TMPro.Examples.VertexShakeB::Awake()
extern void VertexShakeB_Awake_mFA9A180BD1769CC79E6325314B5652D605ABE58E (void);
// 0x00000490 System.Void TMPro.Examples.VertexShakeB::OnEnable()
extern void VertexShakeB_OnEnable_m4999DF4598174EDA2A47F4F667B5CE061DF97C21 (void);
// 0x00000491 System.Void TMPro.Examples.VertexShakeB::OnDisable()
extern void VertexShakeB_OnDisable_m2FB32CBD277A271400BF8AF2A35294C09FE9B8E5 (void);
// 0x00000492 System.Void TMPro.Examples.VertexShakeB::Start()
extern void VertexShakeB_Start_m58786A0944340EF16E024ADB596C9AB5686C2AF1 (void);
// 0x00000493 System.Void TMPro.Examples.VertexShakeB::ON_TEXT_CHANGED(UnityEngine.Object)
extern void VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D (void);
// 0x00000494 System.Collections.IEnumerator TMPro.Examples.VertexShakeB::AnimateVertexColors()
extern void VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F (void);
// 0x00000495 System.Void TMPro.Examples.VertexShakeB::.ctor()
extern void VertexShakeB__ctor_m9D068774503CF8642CC0BAC0E909ECE91E4E2198 (void);
// 0x00000496 System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::.ctor(System.Int32)
extern void U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D (void);
// 0x00000497 System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
extern void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m4DD41FA568ABBC327FA38C0E345EFB6F1A71C2C8 (void);
// 0x00000498 System.Boolean TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::MoveNext()
extern void U3CAnimateVertexColorsU3Ed__10_MoveNext_mDD84A4116FCAAF920F86BA72F890CE0BE76AF348 (void);
// 0x00000499 System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m250CC96EC17E74D79536FDA4EB6F5B5F985C0845 (void);
// 0x0000049A System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
extern void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A (void);
// 0x0000049B System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
extern void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m496F1BFEADA21FFB684F8C1996EAB707CFA1C5F0 (void);
// 0x0000049C System.Void TMPro.Examples.VertexZoom::Awake()
extern void VertexZoom_Awake_m29C1DE789B968D726EDD69F605321A223D47C1A0 (void);
// 0x0000049D System.Void TMPro.Examples.VertexZoom::OnEnable()
extern void VertexZoom_OnEnable_mE3719F01B6A8590066988F425F8A63103B5A7B47 (void);
// 0x0000049E System.Void TMPro.Examples.VertexZoom::OnDisable()
extern void VertexZoom_OnDisable_mBB91C9EFA049395743D27358A427BB2B05850B47 (void);
// 0x0000049F System.Void TMPro.Examples.VertexZoom::Start()
extern void VertexZoom_Start_mB03D03148C98EBC9117D69510D24F21978546FCB (void);
// 0x000004A0 System.Void TMPro.Examples.VertexZoom::ON_TEXT_CHANGED(UnityEngine.Object)
extern void VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7 (void);
// 0x000004A1 System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
extern void VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (void);
// 0x000004A2 System.Void TMPro.Examples.VertexZoom::.ctor()
extern void VertexZoom__ctor_m454AF80ACB5C555BCB4B5E658A22B5A4FCC39422 (void);
// 0x000004A3 System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (void);
// 0x000004A4 System.Int32 TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<AnimateVertexColors>b__0(System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A (void);
// 0x000004A5 System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
extern void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (void);
// 0x000004A6 System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
extern void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m974E92A444C6343E94C76BB6CC6508F7AE4FD36E (void);
// 0x000004A7 System.Boolean TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::MoveNext()
extern void U3CAnimateVertexColorsU3Ed__10_MoveNext_m6DBC52A95A92A54A1801DC4CEE548FA568251D5E (void);
// 0x000004A8 System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m110CD16E89E725B1484D24FFB1753768F78A988B (void);
// 0x000004A9 System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
extern void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821 (void);
// 0x000004AA System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
extern void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m14B89756695EE73AEBB6F3A613F65E1343A8CC2C (void);
// 0x000004AB System.Void TMPro.Examples.WarpTextExample::Awake()
extern void WarpTextExample_Awake_m92842E51B4DBB2E4341ACB179468049FAB23949F (void);
// 0x000004AC System.Void TMPro.Examples.WarpTextExample::Start()
extern void WarpTextExample_Start_m3339EDC03B6FC498916520CBCCDB5F9FA090F809 (void);
// 0x000004AD UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
extern void WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (void);
// 0x000004AE System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
extern void WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (void);
// 0x000004AF System.Void TMPro.Examples.WarpTextExample::.ctor()
extern void WarpTextExample__ctor_mBD48A5403123F25C45B5E60C19E1EA397FBA1795 (void);
// 0x000004B0 System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
extern void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (void);
// 0x000004B1 System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.IDisposable.Dispose()
extern void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m145D2DA1026419984AD79D5D62FBC38C9441AB53 (void);
// 0x000004B2 System.Boolean TMPro.Examples.WarpTextExample/<WarpText>d__8::MoveNext()
extern void U3CWarpTextU3Ed__8_MoveNext_mCE7A826C5E4854C2C509C77BD18F5A9B6D691B02 (void);
// 0x000004B3 System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD80368E9B7E259311C03E406B75161ED6F7618E3 (void);
// 0x000004B4 System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.Reset()
extern void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42 (void);
// 0x000004B5 System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.get_Current()
extern void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m71D7F84D9DEF63BEC6B44866515DDCF35B142A19 (void);
// 0x000004B6 System.Void SnackersUI.DemoScript::Awake()
extern void DemoScript_Awake_m5A9B6CFA3389D4C10EF5F94B17CAEDB27C1C481E (void);
// 0x000004B7 System.Void SnackersUI.DemoScript::OnEnable()
extern void DemoScript_OnEnable_m9C748C4D37F0A232D4118BCF5FC3C9A5A61EC478 (void);
// 0x000004B8 System.Collections.IEnumerator SnackersUI.DemoScript::Co_PlayDemo()
extern void DemoScript_Co_PlayDemo_m1EDA7270CFB3FC8CCAC732AA11A6AAFA82A09D0B (void);
// 0x000004B9 System.Void SnackersUI.DemoScript::.ctor()
extern void DemoScript__ctor_m41578642433ADC16E0F9EE537A6FE4482AE5ADE0 (void);
// 0x000004BA System.Void SnackersUI.DemoScript/<Co_PlayDemo>d__4::.ctor(System.Int32)
extern void U3CCo_PlayDemoU3Ed__4__ctor_mFC8A932EE905F0ECE492DC18CF3C0B3486CC6159 (void);
// 0x000004BB System.Void SnackersUI.DemoScript/<Co_PlayDemo>d__4::System.IDisposable.Dispose()
extern void U3CCo_PlayDemoU3Ed__4_System_IDisposable_Dispose_m9A042B92551103B23A247FF81A0339EC208C63BD (void);
// 0x000004BC System.Boolean SnackersUI.DemoScript/<Co_PlayDemo>d__4::MoveNext()
extern void U3CCo_PlayDemoU3Ed__4_MoveNext_mFEA1565B4CD991681CC8694BC53AF3CB9B88B3EB (void);
// 0x000004BD System.Object SnackersUI.DemoScript/<Co_PlayDemo>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCo_PlayDemoU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4191EDDCCC56CFFE7A105CF220C645FEE3DC5011 (void);
// 0x000004BE System.Void SnackersUI.DemoScript/<Co_PlayDemo>d__4::System.Collections.IEnumerator.Reset()
extern void U3CCo_PlayDemoU3Ed__4_System_Collections_IEnumerator_Reset_mA2B0BF109FD157D6B7730F0ECAC4B3A8123608A1 (void);
// 0x000004BF System.Object SnackersUI.DemoScript/<Co_PlayDemo>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CCo_PlayDemoU3Ed__4_System_Collections_IEnumerator_get_Current_m5F5620CE40C57FD87E0FB69C6CD558C058A8430C (void);
// 0x000004C0 System.Void SnackersUI.TrophyRoad::Awake()
extern void TrophyRoad_Awake_mFE9529430C076C0D92C842874AB853FB710F521C (void);
// 0x000004C1 System.Void SnackersUI.TrophyRoad::SetCurrentLevel(System.Int32)
extern void TrophyRoad_SetCurrentLevel_mE833B7E51E4AA69212BAD93B29FD0A5ADF4AB496 (void);
// 0x000004C2 System.Void SnackersUI.TrophyRoad::.ctor()
extern void TrophyRoad__ctor_mF7CDD4D83F36AE7301502756EC4AB807E5EADD7A (void);
// 0x000004C3 System.Void SnackersUI.TweenAnimatedUIElement::Awake()
extern void TweenAnimatedUIElement_Awake_m1C1C860CD02449F2F1BABCFFFFE47088B2A61FC1 (void);
// 0x000004C4 System.Void SnackersUI.TweenAnimatedUIElement::Show()
extern void TweenAnimatedUIElement_Show_m6BDFF54757A0536612CAE238C6E1E2FFD9475A5B (void);
// 0x000004C5 System.Void SnackersUI.TweenAnimatedUIElement::Hide()
extern void TweenAnimatedUIElement_Hide_m0C4291929DD091A0BF1E7FAB61EFFFF962C3DF1A (void);
// 0x000004C6 System.Void SnackersUI.TweenAnimatedUIElement::IterateChildrenElements(System.Action`1<SnackersUI.TweenAnimatedUIElement>)
extern void TweenAnimatedUIElement_IterateChildrenElements_mEB3FAF651B37699AAE95C47E544F0BE9D23A7F55 (void);
// 0x000004C7 System.Collections.IEnumerator SnackersUI.TweenAnimatedUIElement::Co_DelayedHide(System.Single)
extern void TweenAnimatedUIElement_Co_DelayedHide_m54535F4FB7AF0838ED198106A07A9F7240ECAD4F (void);
// 0x000004C8 System.Void SnackersUI.TweenAnimatedUIElement::.ctor()
extern void TweenAnimatedUIElement__ctor_mDAF16125370A64CC1DD29D0C6323D44AFD8EE56C (void);
// 0x000004C9 System.Void SnackersUI.TweenAnimatedUIElement/<>c::.cctor()
extern void U3CU3Ec__cctor_m763B14FA262A37185D21E692E22EC5209C43DCC4 (void);
// 0x000004CA System.Void SnackersUI.TweenAnimatedUIElement/<>c::.ctor()
extern void U3CU3Ec__ctor_mC6E597F503F1D7ED8026C2ABF95989C5B3C307B2 (void);
// 0x000004CB System.Void SnackersUI.TweenAnimatedUIElement/<>c::<Show>b__6_0(SnackersUI.TweenAnimatedUIElement)
extern void U3CU3Ec_U3CShowU3Eb__6_0_m7E452E37F5A3A4107934D125C499F08495081E8E (void);
// 0x000004CC System.Void SnackersUI.TweenAnimatedUIElement/<>c::<Hide>b__7_0(SnackersUI.TweenAnimatedUIElement)
extern void U3CU3Ec_U3CHideU3Eb__7_0_m302E0B7490DB5E04E7B34505F7438E7B319CDCA4 (void);
// 0x000004CD System.Void SnackersUI.TweenAnimatedUIElement/<Co_DelayedHide>d__9::.ctor(System.Int32)
extern void U3CCo_DelayedHideU3Ed__9__ctor_m2AA8FF85B089858C08EEE95E8236176EDA7518CF (void);
// 0x000004CE System.Void SnackersUI.TweenAnimatedUIElement/<Co_DelayedHide>d__9::System.IDisposable.Dispose()
extern void U3CCo_DelayedHideU3Ed__9_System_IDisposable_Dispose_m313FD28C62998A7409B9369CB53511E21B4AFF8F (void);
// 0x000004CF System.Boolean SnackersUI.TweenAnimatedUIElement/<Co_DelayedHide>d__9::MoveNext()
extern void U3CCo_DelayedHideU3Ed__9_MoveNext_m7C89806C90F25F838425E9374C2CD3CB8FCFCBAF (void);
// 0x000004D0 System.Object SnackersUI.TweenAnimatedUIElement/<Co_DelayedHide>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCo_DelayedHideU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D7735E9FA873A80226EFC9094DE6ED93A9A1E73 (void);
// 0x000004D1 System.Void SnackersUI.TweenAnimatedUIElement/<Co_DelayedHide>d__9::System.Collections.IEnumerator.Reset()
extern void U3CCo_DelayedHideU3Ed__9_System_Collections_IEnumerator_Reset_m2B2CF8CD561BFE5F39C03FCA77A3AE1ACE407FD2 (void);
// 0x000004D2 System.Object SnackersUI.TweenAnimatedUIElement/<Co_DelayedHide>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CCo_DelayedHideU3Ed__9_System_Collections_IEnumerator_get_Current_mC0DE7E84AB28C9F4C402542C3F75D7637011BF2D (void);
// 0x000004D3 System.Void SnackersUI.FadeAnimation::Awake()
extern void FadeAnimation_Awake_m1F160465C9ABCE6F1552FFDE17EF62E264525D4F (void);
// 0x000004D4 System.Void SnackersUI.FadeAnimation::Play()
extern void FadeAnimation_Play_mC738A0CD89769B20D3D8B1329D7C4ADA2576C21B (void);
// 0x000004D5 System.Void SnackersUI.FadeAnimation::.ctor()
extern void FadeAnimation__ctor_mB2767B1BC4E316149884FCA5966075358C94E89E (void);
// 0x000004D6 UnityEngine.RectTransform SnackersUI.ScaleAnimation::get_Rt()
extern void ScaleAnimation_get_Rt_m7CF055E4E223CE6A288B66F91E3A95D0A3E2403D (void);
// 0x000004D7 UnityEngine.Vector3 SnackersUI.ScaleAnimation::get_TargetScale()
extern void ScaleAnimation_get_TargetScale_m2B402A237F43A4BF71895B731D628F810B6741FD (void);
// 0x000004D8 System.Void SnackersUI.ScaleAnimation::Awake()
extern void ScaleAnimation_Awake_m39331D627713B2883B84694296C14A7DF29AB473 (void);
// 0x000004D9 System.Void SnackersUI.ScaleAnimation::Play()
extern void ScaleAnimation_Play_mB3D6DBDC6B94EE1259BF06E5A745CC8712A9604A (void);
// 0x000004DA System.Void SnackersUI.ScaleAnimation::.ctor()
extern void ScaleAnimation__ctor_m851D53B84CA07C72488B7C1E4EEE5336DF9336BB (void);
// 0x000004DB UnityEngine.RectTransform SnackersUI.TranslateAnimation::get_Rt()
extern void TranslateAnimation_get_Rt_mD8EAEAEFCA4230E7A4DB1B073B7D8A6E16EF882E (void);
// 0x000004DC System.Void SnackersUI.TranslateAnimation::Awake()
extern void TranslateAnimation_Awake_mC4D963F7C493A170857DBB78269665A939E57659 (void);
// 0x000004DD System.Void SnackersUI.TranslateAnimation::Play()
extern void TranslateAnimation_Play_mD99D8AA287356A53A49B960E2604A751A30DB33D (void);
// 0x000004DE System.Void SnackersUI.TranslateAnimation::.ctor()
extern void TranslateAnimation__ctor_mC0A54D488C447509917B404A08D6B1B80D8A915F (void);
// 0x000004DF System.Void SnackersUI.TweenAnimationBase::Play()
// 0x000004E0 System.Void SnackersUI.TweenAnimationBase::.ctor()
extern void TweenAnimationBase__ctor_m01BE4FE3D775208A2E778F858EBEA79C944D6E15 (void);
// 0x000004E1 System.Void EpicToonFX.ETFXLightFade::Start()
extern void ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60 (void);
// 0x000004E2 System.Void EpicToonFX.ETFXLightFade::Update()
extern void ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF (void);
// 0x000004E3 System.Void EpicToonFX.ETFXLightFade::.ctor()
extern void ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107 (void);
// 0x000004E4 System.Void EpicToonFX.ETFXPitchRandomizer::Start()
extern void ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832 (void);
// 0x000004E5 System.Void EpicToonFX.ETFXPitchRandomizer::.ctor()
extern void ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2 (void);
// 0x000004E6 System.Void EpicToonFX.ETFXRotation::Start()
extern void ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5 (void);
// 0x000004E7 System.Void EpicToonFX.ETFXRotation::Update()
extern void ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A (void);
// 0x000004E8 System.Void EpicToonFX.ETFXRotation::.ctor()
extern void ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007 (void);
// 0x000004E9 YMMJSONUtils.JObjectKind YMMJSONUtils.JObject::get_Kind()
extern void JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C (void);
// 0x000004EA System.Void YMMJSONUtils.JObject::set_Kind(YMMJSONUtils.JObjectKind)
extern void JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55 (void);
// 0x000004EB System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ObjectValue()
extern void JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706 (void);
// 0x000004EC System.Void YMMJSONUtils.JObject::set_ObjectValue(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
extern void JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A (void);
// 0x000004ED System.Collections.Generic.List`1<YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ArrayValue()
extern void JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D (void);
// 0x000004EE System.Void YMMJSONUtils.JObject::set_ArrayValue(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
extern void JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768 (void);
// 0x000004EF System.String YMMJSONUtils.JObject::get_StringValue()
extern void JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58 (void);
// 0x000004F0 System.Void YMMJSONUtils.JObject::set_StringValue(System.String)
extern void JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B (void);
// 0x000004F1 System.Boolean YMMJSONUtils.JObject::get_BooleanValue()
extern void JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542 (void);
// 0x000004F2 System.Void YMMJSONUtils.JObject::set_BooleanValue(System.Boolean)
extern void JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF (void);
// 0x000004F3 System.Int32 YMMJSONUtils.JObject::get_Count()
extern void JObject_get_Count_mF9AF92947ACABC66F11C63C58693AEA05545EDF9 (void);
// 0x000004F4 System.Double YMMJSONUtils.JObject::get_DoubleValue()
extern void JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E (void);
// 0x000004F5 System.Void YMMJSONUtils.JObject::set_DoubleValue(System.Double)
extern void JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3 (void);
// 0x000004F6 System.Single YMMJSONUtils.JObject::get_FloatValue()
extern void JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782 (void);
// 0x000004F7 System.Void YMMJSONUtils.JObject::set_FloatValue(System.Single)
extern void JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0 (void);
// 0x000004F8 System.UInt64 YMMJSONUtils.JObject::get_ULongValue()
extern void JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4 (void);
// 0x000004F9 System.Void YMMJSONUtils.JObject::set_ULongValue(System.UInt64)
extern void JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC (void);
// 0x000004FA System.Int64 YMMJSONUtils.JObject::get_LongValue()
extern void JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036 (void);
// 0x000004FB System.Void YMMJSONUtils.JObject::set_LongValue(System.Int64)
extern void JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840 (void);
// 0x000004FC System.UInt32 YMMJSONUtils.JObject::get_UIntValue()
extern void JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D (void);
// 0x000004FD System.Void YMMJSONUtils.JObject::set_UIntValue(System.UInt32)
extern void JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790 (void);
// 0x000004FE System.Int32 YMMJSONUtils.JObject::get_IntValue()
extern void JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64 (void);
// 0x000004FF System.Void YMMJSONUtils.JObject::set_IntValue(System.Int32)
extern void JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE (void);
// 0x00000500 System.UInt16 YMMJSONUtils.JObject::get_UShortValue()
extern void JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384 (void);
// 0x00000501 System.Void YMMJSONUtils.JObject::set_UShortValue(System.UInt16)
extern void JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D (void);
// 0x00000502 System.Int16 YMMJSONUtils.JObject::get_ShortValue()
extern void JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A (void);
// 0x00000503 System.Void YMMJSONUtils.JObject::set_ShortValue(System.Int16)
extern void JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909 (void);
// 0x00000504 System.Byte YMMJSONUtils.JObject::get_ByteValue()
extern void JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68 (void);
// 0x00000505 System.Void YMMJSONUtils.JObject::set_ByteValue(System.Byte)
extern void JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA (void);
// 0x00000506 System.SByte YMMJSONUtils.JObject::get_SByteValue()
extern void JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528 (void);
// 0x00000507 System.Void YMMJSONUtils.JObject::set_SByteValue(System.SByte)
extern void JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE (void);
// 0x00000508 System.Boolean YMMJSONUtils.JObject::get_IsNegative()
extern void JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1 (void);
// 0x00000509 System.Void YMMJSONUtils.JObject::set_IsNegative(System.Boolean)
extern void JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD (void);
// 0x0000050A System.Boolean YMMJSONUtils.JObject::get_IsFractional()
extern void JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470 (void);
// 0x0000050B System.Void YMMJSONUtils.JObject::set_IsFractional(System.Boolean)
extern void JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322 (void);
// 0x0000050C YMMJSONUtils.IntegerSize YMMJSONUtils.JObject::get_MinInteger()
extern void JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9 (void);
// 0x0000050D System.Void YMMJSONUtils.JObject::set_MinInteger(YMMJSONUtils.IntegerSize)
extern void JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759 (void);
// 0x0000050E YMMJSONUtils.FloatSize YMMJSONUtils.JObject::get_MinFloat()
extern void JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83 (void);
// 0x0000050F System.Void YMMJSONUtils.JObject::set_MinFloat(YMMJSONUtils.FloatSize)
extern void JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649 (void);
// 0x00000510 YMMJSONUtils.JObject YMMJSONUtils.JObject::get_Item(System.String)
extern void JObject_get_Item_m46C334AB26DA340F719D09FCA60BCB60C9CD48CA (void);
// 0x00000511 YMMJSONUtils.JObject YMMJSONUtils.JObject::get_Item(System.Int32)
extern void JObject_get_Item_m812085ADF993D5888C5F69233195E5851C80C41A (void);
// 0x00000512 System.String YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m91CE744D7CD627E8A19B081D7CA029436BC82A2B (void);
// 0x00000513 System.Boolean YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m6BB0BE577426EC26C1D78D4A7BE321523AE35DAB (void);
// 0x00000514 System.Double YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mCA528C9C1B2A5DE24DA8F54D4FF32D019B152DAF (void);
// 0x00000515 System.Single YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m5C37537EB0C5F8C9F7D9A6E297229AD667050407 (void);
// 0x00000516 System.UInt64 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mE6AD01C8C18717761A33CDE14188133DF1354678 (void);
// 0x00000517 System.Int64 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mC4C1D472D280F55CBDA46139343207CD54FA09CD (void);
// 0x00000518 System.UInt32 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m58BDB38F8D53BEC03DC2B585BC93619FB8008EA9 (void);
// 0x00000519 System.Int32 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m8C4A8F99EC1181576CF506A9BDAE2EA2A7A461D3 (void);
// 0x0000051A System.UInt16 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m95E4E424758D176CE5F782CB330753F69442F8A5 (void);
// 0x0000051B System.Int16 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m0783B9006A4371CCF2D2F07F2BFAB7C6B263E083 (void);
// 0x0000051C System.Byte YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mB57EE7A3507305E88BD0DAF8C50520F13919A52A (void);
// 0x0000051D System.SByte YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mBD554A7AC5AF77C778FCB838F1F8030860EDE875 (void);
// 0x0000051E YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateString(System.String)
extern void JObject_CreateString_m2D29F5DF3DA461D2411DD5236006A2E818AF24FD (void);
// 0x0000051F YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateBoolean(System.Boolean)
extern void JObject_CreateBoolean_m19A41F29B2C89DA4BB613D8284923113A24CE4A8 (void);
// 0x00000520 YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateNull()
extern void JObject_CreateNull_mE6BF7B1637ACF216EAD4D562329913ED9EBC15AE (void);
// 0x00000521 YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateNumber(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
extern void JObject_CreateNumber_mDEDBB16F3828F4A3611D58ECFB19C54C06C8321A (void);
// 0x00000522 YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateArray(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
extern void JObject_CreateArray_mC94F63B6CA87C8CD7DF7D2E5A56F51A55860B873 (void);
// 0x00000523 YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateObject(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
extern void JObject_CreateObject_m11F3D06CA8A08362C226387F51D672F1AA224BF6 (void);
// 0x00000524 System.Void YMMJSONUtils.JObject::.ctor(System.String)
extern void JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917 (void);
// 0x00000525 System.Void YMMJSONUtils.JObject::.ctor(System.Boolean)
extern void JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27 (void);
// 0x00000526 System.Void YMMJSONUtils.JObject::.ctor()
extern void JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929 (void);
// 0x00000527 System.Void YMMJSONUtils.JObject::.ctor(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
extern void JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA (void);
// 0x00000528 System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
extern void JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90 (void);
// 0x00000529 System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
extern void JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D (void);
// 0x0000052A System.Void YMMJSONUtils.JObject::MakeInteger(System.Boolean,System.UInt64)
extern void JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3 (void);
// 0x0000052B System.Void YMMJSONUtils.JObject::MakeFloat(System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
extern void JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09 (void);
// 0x0000052C System.Boolean YMMJSONUtils.JObject::Equals(System.Object)
extern void JObject_Equals_m8D9A02DC9315E65D67684DD25A7FE20072E9ED4A (void);
// 0x0000052D System.Int32 YMMJSONUtils.JObject::GetHashCode()
extern void JObject_GetHashCode_m91C908795F81B70ACF230C7E128CE8A9D8139423 (void);
// 0x0000052E System.Boolean YMMJSONUtils.JObject::EqualNumber(YMMJSONUtils.JObject,YMMJSONUtils.JObject)
extern void JObject_EqualNumber_m6ACB2B57B24104A3501EA94263D985B8A27000C7 (void);
// 0x0000052F System.String YMMJSONUtils.JSONEncoder::Encode(System.Object)
extern void JSONEncoder_Encode_mCC18CF69E4E2EE24AE5E713CE17FBC3DA6CF7756 (void);
// 0x00000530 System.Void YMMJSONUtils.JSONEncoder::.ctor()
extern void JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04 (void);
// 0x00000531 System.Void YMMJSONUtils.JSONEncoder::EncodeObject(System.Object)
extern void JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2 (void);
// 0x00000532 System.Void YMMJSONUtils.JSONEncoder::EncodeNull()
extern void JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0 (void);
// 0x00000533 System.Void YMMJSONUtils.JSONEncoder::EncodeString(System.String)
extern void JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1 (void);
// 0x00000534 System.Void YMMJSONUtils.JSONEncoder::EncodeFloat(System.Single)
extern void JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46 (void);
// 0x00000535 System.Void YMMJSONUtils.JSONEncoder::EncodeDouble(System.Double)
extern void JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA (void);
// 0x00000536 System.Void YMMJSONUtils.JSONEncoder::EncodeLong(System.Int64)
extern void JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584 (void);
// 0x00000537 System.Void YMMJSONUtils.JSONEncoder::EncodeULong(System.UInt64)
extern void JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D (void);
// 0x00000538 System.Void YMMJSONUtils.JSONEncoder::EncodeBool(System.Boolean)
extern void JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8 (void);
// 0x00000539 System.Void YMMJSONUtils.JSONEncoder::EncodeDictionary(System.Collections.IDictionary)
extern void JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D (void);
// 0x0000053A System.Void YMMJSONUtils.JSONEncoder::EncodeEnumerable(System.Collections.IEnumerable)
extern void JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E (void);
// 0x0000053B System.Void YMMJSONUtils.JSONEncoder::.cctor()
extern void JSONEncoder__cctor_mE8F1C589FE0046B81EB5CF1C3B036D417E957EA5 (void);
static Il2CppMethodPointer s_methodPointers[1339] = 
{
	AppMetrica_get_Instance_m5EB615F21606FEDEF7F6B8B0319689ECC158B4C7,
	AppMetrica_Awake_m5DBDA7E169B0B6D729898C98AD1CAC678E7B763C,
	AppMetrica_Start_m4227B9206EF0DE1753E4A5687402C6E9DAF69EFF,
	AppMetrica_OnEnable_m55694E9FE00FF0D66D32C5EC5EF7A39DA0EF6319,
	AppMetrica_OnDisable_m0FC036E0B92B985040D9E200EB36876216E561F2,
	AppMetrica_OnApplicationPause_m6F8A17B737F2D9D3E3B1DC458B65B9A844635634,
	AppMetrica_SetupMetrica_m501B61D5B792CCF44AA9E1CCB954BE9EF8742ACE,
	AppMetrica_HandleLog_m5854426FF167D14B0A3E74EF494CC30CF78861AB,
	AppMetrica__ctor_m5B7D252993797CB916179B095B80914B247365D6,
	AppMetrica__cctor_mD201631287959F894644DAAE68F3BF8D3B3DD324,
	BaseYandexAppMetrica_add_OnActivation_mE925443792B17ACC016ABB93EF54098121976705,
	BaseYandexAppMetrica_remove_OnActivation_m6E0C02E4696C797132351E2B88299A04311D2C30,
	BaseYandexAppMetrica_get_ActivationConfig_m6F9B498B12BBF9EF2879103B2BE60C1A36E33E7B,
	BaseYandexAppMetrica_set_ActivationConfig_mA9EC61A5043E97D3389810FA1CC98C4D7D679396,
	BaseYandexAppMetrica_ActivateWithConfiguration_mB7480711FBEBF9C945C5C10826D23FE1F2BD5F46,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BaseYandexAppMetrica_UpdateConfiguration_mC825E37FFAFD4B1FC173FC15760FD7D440515414,
	BaseYandexAppMetrica__ctor_mDEED10287F9551B410A31EE144B414B4546BC13B,
	ConfigUpdateHandler__ctor_m36F90B4DDDAC65D9981C40C9D3F3A28BC05AD164,
	ConfigUpdateHandler_Invoke_m8E918DAFE7EE9507A2257200C4394D456449C4A3,
	ConfigUpdateHandler_BeginInvoke_m5731E165F907F1F98380A9A985330CA059429F04,
	ConfigUpdateHandler_EndInvoke_mF634D3F33A43E2A07E34785203CDE6945A4595E9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	YandexAppMetricaAttribute_BirthDate_m940F5E6923E117B7B0619ABC5E0E4109E62C8E51,
	YandexAppMetricaAttribute_Gender_m9A02B789945EF58EC88AED208940D076EAAC51C1,
	YandexAppMetricaAttribute_Name_m4E1BA13C5E1C358925D9E07B4024F351E8DFAC7D,
	YandexAppMetricaAttribute_NotificationsEnabled_mFA5914B046C47AD63C00B20937BA3B82646F963F,
	YandexAppMetricaAttribute_CustomBoolean_m368F70F1967804C347DAC4CDFD0E81A8510C9362,
	YandexAppMetricaAttribute_CustomCounter_m37612DD78B1256655CA115432D15E11B6AA1E703,
	YandexAppMetricaAttribute_CustomNumber_m6D7A7F27AD7470D6D0FFD701EF6F41D9288E278B,
	YandexAppMetricaAttribute_CustomString_mB837A3A4C7645F167B21AD1944AA6D2831A39B42,
	YandexAppMetricaAttribute__ctor_m5A647386010BF13E8F99674A8733B88D2F7B1D3F,
	YandexAppMetricaBirthDateAttribute_WithAge_m0C771B731C3BCF41F88C0140FA1A2444DA8B0B10,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_m18FC24496982FC933F8670DCACEC52EA3B342A0E,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_mA11761F7AE84434D984A80D539961E5D06C0528B,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_m29EBA21927093D5A65A5864855CE54AF5ADEB55C,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_m30A5F955325E558A2940E2EFCB0388168BD33298,
	YandexAppMetricaBirthDateAttribute_WithValueReset_m730305211DC7E81A347C4308BCC8A6954DEC6C30,
	YandexAppMetricaBirthDateAttribute__ctor_m64060851390EC187EB959622802023492D1F8899,
	YandexAppMetricaBooleanAttribute__ctor_m73B86BF16008315C5DBC5FFA155097BC901219BF,
	YandexAppMetricaBooleanAttribute_WithValue_m72F14C9186D8839CAF9AE3D38470EA73B86D6FC0,
	YandexAppMetricaBooleanAttribute_WithValueIfUndefined_mB4BCF4671C23A53BC271733B98AE65FD561372A8,
	YandexAppMetricaBooleanAttribute_WithValueReset_mF1ABFF5F4F5004E3C4C2CEB67B00DEF4A2C43C9E,
	YandexAppMetricaCounterAttribute__ctor_mC95D8E05C76A8AF6480ED5B5F69A5904CF60906B,
	YandexAppMetricaCounterAttribute_WithDelta_m7465A2743220C2C6888870B1A8CE90124BF7D184,
	YandexAppMetricaGenderAttribute_WithValue_m434A83E78D313872AFF18311717CF227944C0BE7,
	YandexAppMetricaGenderAttribute_WithValueReset_mDD72761DC6F6409CAEE291176FED21FB58DD400A,
	YandexAppMetricaGenderAttribute__ctor_mC519505AC6A85A3A8FE277508A2EC1565AB7E57A,
	YandexAppMetricaNameAttribute_WithValue_m0EEC5D1F557DAA8F3607C18AF41D9645C1A24FBE,
	YandexAppMetricaNameAttribute_WithValueReset_m2276032DEE0C6E2DABE7BAB7C604C26AFD3F6F40,
	YandexAppMetricaNameAttribute__ctor_mCDAA237E85DA4E8147637C16817C296A6FF398E3,
	YandexAppMetricaNotificationsEnabledAttribute_WithValue_m7A37CA6B9D0AFC753AC82E9C603DA554565AED45,
	YandexAppMetricaNotificationsEnabledAttribute_WithValueReset_mD91041866C6FA3D3CE43D0A4A5316E78269EF222,
	YandexAppMetricaNotificationsEnabledAttribute__ctor_mDB95771E3D9E6EDF5CD702313883C1D973676E22,
	YandexAppMetricaNumberAttribute__ctor_mEAA52D4E7DEC953C1B806078CB31EC5C2D3DFD9F,
	YandexAppMetricaNumberAttribute_WithValue_m6D6C31092CDA461FE6FE251860C8BD3BD0683D40,
	YandexAppMetricaNumberAttribute_WithValueIfUndefined_mBB564239EF84EFA6306802982539E662B1A83116,
	YandexAppMetricaNumberAttribute_WithValueReset_m6AC56300891C43EEEA4A366DC2709F9BA3DAB480,
	YandexAppMetricaStringAttribute__ctor_m54DE5D82EEFC0D4AC02FA1FC873524FFD4B1012A,
	YandexAppMetricaStringAttribute_WithValue_mAC56CBAA84C15FD0A5C1BEA6C00E6D647E8A9918,
	YandexAppMetricaStringAttribute_WithValueIfUndefined_mB3BDEE8214F295C07D3D65764DCF35256AD78926,
	YandexAppMetricaStringAttribute_WithValueReset_mD3A166BEBF470E1E27D7667BC67B424C9DFB00A4,
	YandexAppMetricaUserProfile_GetUserProfileUpdates_m6B1311B7ED6F7AC449420D786F59018EE85FB7BB,
	YandexAppMetricaUserProfile_Apply_m27F43850CE1AC7E50A7E1748A420DBFE3274BAF2,
	YandexAppMetricaUserProfile_ApplyFromArray_m35A3EA902F9EC11F0B777494CFC18A152A65DE17,
	YandexAppMetricaUserProfile__ctor_m971F44583D1869C13C4B81E0026D94959B2AADF6,
	YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86,
	YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1,
	YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26,
	YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228,
	YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D,
	YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88,
	YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D,
	YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2,
	YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2,
	YandexAppMetricaAndroid_JsonStringFromDictionary_m1BAEE09C16FEAF4362C0D63815421F1CDEB37947,
	YandexAppMetricaAndroid_ThrowableFromStringStackTrace_m44D9A531BB4CD92D5E1C1E41FA51501EEFC20C89,
	YandexAppMetricaAndroid_CallAppMetrica_mD913E7708019833E2777050300BB404BBD427522,
	YandexAppMetricaAndroid_CallYandexMetricaPlugins_m24B9CC0C69B66A2D253BE6E81C30065698198984,
	YandexAppMetricaAndroid_GetSignatureFromTypeNames_mF47E65AFBEC86B20D622718EB5A5AA6FD890E984,
	YandexAppMetricaAndroid_ActivateWithConfiguration_m9AEA491CD86A9B4CA4145C1DE369652DE7E354D9,
	YandexAppMetricaAndroid_ResumeSession_mAAF5A13CDC981D10526F923D9489B48CD006B622,
	YandexAppMetricaAndroid_PauseSession_mE00FE65302C17999E82CF443C526400C14B14424,
	YandexAppMetricaAndroid_ReportEvent_m9797C3E1C2A21B49F410B1443E07FF5A3815E05F,
	YandexAppMetricaAndroid_ReportEvent_m1287F782DC0B11449CC33276372B31A00D0433F0,
	YandexAppMetricaAndroid_ReportEvent_m1AFDFB874F37EBFFDD5106D626D6C2B61AFC2751,
	YandexAppMetricaAndroid_ReportError_mB0D97D230E3DBF1BEAAFEDC707F1B5F3CAD3CB01,
	YandexAppMetricaAndroid_ReportError_m3781303E08712941BEE862946663B91505B5FAE6,
	YandexAppMetricaAndroid_ReportError_mEE5AB04E1A4B9A38F2E28B1713FE9CFF3C68E86D,
	YandexAppMetricaAndroid_ReportError_m095A53099D7AA9D202ECE75313A82D8A062527A2,
	YandexAppMetricaAndroid_ReportError_mF672932C825B13FF65FB1D3FB04F01581CD42AFA,
	YandexAppMetricaAndroid_ReportError_mF60163F2A17F931246748875120DE79BA24C6D31,
	YandexAppMetricaAndroid_ReportUnhandledException_m9C1FB8E7A3847049F4A9E9CCC61C76A1A30D3876,
	YandexAppMetricaAndroid_ReportUnhandledException_m1273DAD576FC6767076D96065F1FEBEBDC094F09,
	YandexAppMetricaAndroid_ReportErrorFromLogCallback_mE4BA429806CAEA059EBDB74D64C9D7180BE2F771,
	YandexAppMetricaAndroid_SetLocationTracking_m142BDF168D811AAF642F8E1AB9A492A14D249072,
	YandexAppMetricaAndroid_SetLocation_m11DCA672B8CA0D9F7F7E9225B80D3D4300E821B3,
	YandexAppMetricaAndroid_get_LibraryApiLevel_m3DC68E5156B90D2979A3D5A177E9C051A0F721E2,
	YandexAppMetricaAndroid_get_LibraryVersion_m6A08313064BD693C76582476435C6B2D459E6CF8,
	YandexAppMetricaAndroid_SetUserProfileID_m8EB1151D563089E8C70DDB20C7941015618A5429,
	YandexAppMetricaAndroid_ReportUserProfile_mB6C896883793D47847AB4C2595A61F91AEA796B3,
	YandexAppMetricaAndroid_ReportRevenue_m3F2050BCB8C2A37CBEC0BE04F8E83B8F3A43FAFE,
	YandexAppMetricaAndroid_SetStatisticsSending_m14D5A28D885173FB6019D35C09FB61656F00EC0A,
	YandexAppMetricaAndroid_SendEventsBuffer_mBFD658286BE42404E656C82A4760E0E9EC6CE5E3,
	YandexAppMetricaAndroid_RequestAppMetricaDeviceID_m5951B8047BD1271B6D5D7BDBFA067199F53A4464,
	YandexAppMetricaAndroid_ReportAppOpen_mCD5DE2F1DAD7F850E55AA905E79BB8F13ABE3D76,
	YandexAppMetricaAndroid_PutErrorEnvironmentValue_m87FDE9268C9B7E4AC5D6AE5DF9F3361261C9706E,
	YandexAppMetricaAndroid_ReportReferralUrl_m45A02B7D78DF39B2D5546E7F5004D29131EC5933,
	YandexAppMetricaAndroid_RequestTrackingAuthorization_m4DE6E1B07342047AB83043C395DC7AEFA02E5DC9,
	YandexAppMetricaAndroid__ctor_m6E35197AA7DDF34EBFFDE31152DA85F49EBC423A,
	YandexAppMetricaExtensionsAndroid_ToAndroidAppMetricaConfig_m9DF6D16C32D02F87C98F239B2B32CDD5DE2FDA9B,
	YandexAppMetricaExtensionsAndroid_ToAndroidLocation_mCF5F8D02166476102C2A28482E7E475E6768886F,
	YandexAppMetricaExtensionsAndroid_ToAndroidGender_mE28D497019D78EB181718108B6F950C3580DAA6D,
	YandexAppMetricaExtensionsAndroid_ToAndroidUserProfileUpdate_mC54DA883F54492F5C7F8FBD4321DE05D1AEEBFA1,
	YandexAppMetricaExtensionsAndroid_ToAndroidUserProfile_mDAB1493464850EFA792A233E9AEEF2A6C90880FB,
	YandexAppMetricaExtensionsAndroid_ToAndroidReceipt_m6C775712DEEBD152BD56185F5704857586135B6E,
	YandexAppMetricaExtensionsAndroid_ToAndroidInteger_mF2DAC7691F76C1D8950115553CC5BD4042827BE9,
	YandexAppMetricaExtensionsAndroid_ToAndroidCurrency_m896BE4ABCE77819573CDFD25AF7752274626C23A,
	YandexAppMetricaExtensionsAndroid_ToAndroidRevenue_m1A5AD7464479D8A2361B5F9FC556E975D71ED5AB,
	YandexAppMetricaExtensionsAndroid_ToAndroidThrowable_mF8C810A444E3F8B7108B4873EFEBFDAB4C272678,
	YandexAppMetricaExtensionsAndroid_ToAndroidPluginErrorDetails_mDEFDB3F133007ED189420F03F061018FC81D534A,
	YandexAppMetricaExtensionsAndroid_ToAndroidStackTraceItem_mEC77A6DE004E86A7D47F19F0CD747A3E51036E4E,
	YandexAppMetricaExtensionsAndroid_CreateAndroidList_m056F1E4A1DFBDA6FC387E2481AACD721C70978B4,
	YandexAppMetricaExtensionsAndroid_ToAndroidMap_mABCA71874FD8EB99EE6F0E76818CCB7CE80FAC59,
	YandexAppMetricaDeviceIDListenerAndroid__ctor_mB7982DD2FF721ED8BC6B3195C923D89DAA9AFC19,
	YandexAppMetricaDeviceIDListenerAndroid_onLoaded_m8922BDD2CF98A40096C874C9025FA1F605932D65,
	YandexAppMetricaDeviceIDListenerAndroid_onError_m87AF86A8C39A39F137CD6C43429EE356A514E391,
	YandexAppMetricaDeviceIDListenerAndroid_ErrorFromAndroidReason_m5448D291C732C6533962EC4355C9E9D73109ADF2,
	YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872,
	YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10,
	YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB,
	YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91,
	YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA,
	YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806,
	YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B,
	YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5,
	YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204,
	YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97,
	YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03,
	YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7,
	YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92,
	YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B,
	YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE,
	YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5,
	YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1,
	YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4,
	YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70,
	YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840,
	YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B,
	YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72,
	YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA,
	YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235,
	YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1,
	YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E,
	YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC,
	Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA,
	Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958,
	Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403,
	Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17,
	YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82,
	YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716,
	YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189,
	YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53,
	YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF,
	YandexAppMetricaDummy_ActivateWithConfiguration_mF4F7CC100A9A71036C5175990933BED3FC3C7DE9,
	YandexAppMetricaDummy_ResumeSession_m72F87852E83F0D32515843217EA98B1AE71325E3,
	YandexAppMetricaDummy_PauseSession_mDEA63747851A33E5BFCA94AD684E2374C0AA749B,
	YandexAppMetricaDummy_ReportEvent_mCA8B31A5B8CBC43AC22AB03BFDB490028EDE4F4D,
	YandexAppMetricaDummy_ReportEvent_mDA835B54FC220CF4E89CF7EC8A19CEAF704C9598,
	YandexAppMetricaDummy_ReportEvent_mF711B6E76C3B5180BBDE1B8DC2112C24822FA80A,
	YandexAppMetricaDummy_ReportError_mCCC548F07ECA29B5DF2447A0B5F1FFC6EF778FCF,
	YandexAppMetricaDummy_ReportError_m7E5E5A7C0C7A42955CB3E78877FB453CE91A5DA6,
	YandexAppMetricaDummy_ReportError_mDD789B98A0A324F9EF93007C7F2B60D8A85FC3C3,
	YandexAppMetricaDummy_ReportError_mD953AF2688D519B5E6A280DE3F0F450D57FDCCBB,
	YandexAppMetricaDummy_ReportError_mFBE5566FE561774058E6028007601FC3B3848751,
	YandexAppMetricaDummy_ReportError_mE39364CA4228864DA5D5AB2A5F8EDED17AFE2BC2,
	YandexAppMetricaDummy_ReportUnhandledException_m98BB8774BE34AA58294C54DEB95D7757B9700F4C,
	YandexAppMetricaDummy_ReportUnhandledException_mE053E77DD1A74C53ABA5F97D1447842F714F23EF,
	YandexAppMetricaDummy_ReportErrorFromLogCallback_m992701136648DE7C9EDCB05540992A1D31B28E59,
	YandexAppMetricaDummy_SetLocationTracking_mCFC5612CCF2909614A2F44EE26E24606F9BEB2D7,
	YandexAppMetricaDummy_SetLocation_mC38E20F136E85FA1AF45C01BB5C642FBD86C1700,
	YandexAppMetricaDummy_get_LibraryVersion_m4E1A5FD6CC5F96FB24AC48124C0848A967BD2AA7,
	YandexAppMetricaDummy_get_LibraryApiLevel_m4A6FB5B8BA2CEECAFF51B6DC06C48E133C4178EA,
	YandexAppMetricaDummy_SetUserProfileID_m3D59E7EFDDD4A71048BD5902112954E7B914D605,
	YandexAppMetricaDummy_ReportUserProfile_m316552F557D1B4BF567CDBD0CCE01AA3D4C1D7CF,
	YandexAppMetricaDummy_ReportRevenue_m07485ACACECC025BC7FD6BD465F727B9DA478751,
	YandexAppMetricaDummy_SetStatisticsSending_m60E36412BACECF9C3F40B280020E1D94408F3A63,
	YandexAppMetricaDummy_SendEventsBuffer_m5514DFD644305C5200F7D65D18B3BB76E269B561,
	YandexAppMetricaDummy_RequestAppMetricaDeviceID_m2344C2B031A16C7FD29E407FD0A80533EC511679,
	YandexAppMetricaDummy_ReportReferralUrl_m09C52CAA1D416B69F5D920459C0DEF404DF09C14,
	YandexAppMetricaDummy_ReportAppOpen_m9E3E355BEF1253529AA19140BC0E6E5F40952803,
	YandexAppMetricaDummy_PutErrorEnvironmentValue_m3FB76C8DBCB3D82A639ED26FF8F4836BE5A67CBE,
	YandexAppMetricaDummy_RequestTrackingAuthorization_m1D797B70AA028DF598C6DEF7B53A106AC7677020,
	YandexAppMetricaDummy__ctor_mC7268479DA37B337858AD22EA14162B5C818D659,
	YandexAppMetricaErrorDetails__ctor_mDC1BDC8F6C13C61669071D7A2CB1D6C5E22124F9,
	YandexAppMetricaErrorDetails_get_ExceptionClass_m21DC3005EF21B07F36177D88714C3F834635FD49,
	YandexAppMetricaErrorDetails_set_ExceptionClass_m43DA4DA19847759D91C7C0F0B08938E28E99E7AE,
	YandexAppMetricaErrorDetails_get_Message_m8D9BA1F2AD14F6A68451AF64A1BBEF59F3937E36,
	YandexAppMetricaErrorDetails_set_Message_m5EADD2ADCE9BAD1EB51AC354BD0FB0EE251071C1,
	YandexAppMetricaErrorDetails_get_Stacktrace_m6053DC39D10D57107770C63CBF41D9ED4003E1E7,
	YandexAppMetricaErrorDetails_set_Stacktrace_m121E0C5106B60574D0B1AC23A2AFCD034498B12E,
	YandexAppMetricaErrorDetails_get_Platform_mC1251AA6A3D9F6E18828550A8C2AC51264789118,
	YandexAppMetricaErrorDetails_set_Platform_mE15421EEA72CFAE27918BD083737059E323BF88A,
	YandexAppMetricaErrorDetails_get_VirtualMachineVersion_m70CF8DB1717C47198846BD36CA97E56CE503DB35,
	YandexAppMetricaErrorDetails_set_VirtualMachineVersion_m1CD5CBC716E07F52FB0E8289B39FDDFBF5F90BF3,
	YandexAppMetricaErrorDetails_get_PluginEnvironment_mE2FD13854E760DF9DDB80D768404081F6B2AB8AD,
	YandexAppMetricaErrorDetails_set_PluginEnvironment_m583755CBD506FDBFB6A901EE7AFDBE7E557557BC,
	YandexAppMetricaErrorDetails_From_m7513633DB0F4A8FBFCF6D5E94D8B7ED0BFCD635B,
	YandexAppMetricaErrorDetails_FromLogCallback_mB1749516E2F0DA59E187B6B0C43853D2963DAB39,
	YandexAppMetricaErrorDetails_ToString_m61FC75211E80DADF84A409E5091B0B0CFB7660C3,
	U3CU3Ec__DisplayClass25_0__ctor_m5D173CCCEFE38B9A3C3E4CA94B263AD38ECDFD3F,
	U3CU3Ec__DisplayClass25_0_U3CFromU3Eb__1_m6C69953E15BD0EE9CCD211E75ACD5B84F6402F9E,
	U3CU3Ec__cctor_mA3593E29485D3D54990E20088F75DB5978C93758,
	U3CU3Ec__ctor_m4F1071D6BB570BA1C8D3D8FF5F1782A16C64C6A6,
	U3CU3Ec_U3CFromU3Eb__25_0_m4A98D783011D4559824B2DE3C1EE2F839005478F,
	U3CU3Ec_U3CFromLogCallbackU3Eb__26_0_m80C4B2CB4577B171EAEF10186F2856AA2E36F8DB,
	U3CU3Ec_U3CToStringU3Eb__27_0_m70B14C191081D073C3F3F91A979D3174532F51FC,
	U3CU3Ec_U3CToStringU3Eb__27_1_m0F731ADDED441A0DD43EA31459EC7C7A6B717F3C,
	U3CU3Ec__DisplayClass26_0__ctor_mE758F5A3E79B0CBE4788BAE6FA18BB4C6955E9BA,
	U3CU3Ec__DisplayClass26_0_U3CFromLogCallbackU3Eb__1_m9A2F371A5DE63C2D4F027EAB5A57D30C6A624B3A,
	YandexAppMetricaStackTraceItem_get_ClassName_m946663DBAD4CCC5FE1A293E80FF8E61ABF724E75,
	YandexAppMetricaStackTraceItem_set_ClassName_m5EEFA29DD15CCDF567A85633826BB7BB8700AFD5,
	YandexAppMetricaStackTraceItem_get_MethodName_m3637BAADC88285596D4096E4A1531DA6F95A7D8F,
	YandexAppMetricaStackTraceItem_set_MethodName_m2732C8389BCAEC8B89AECE4CAA08D1C132819802,
	YandexAppMetricaStackTraceItem_get_FileName_mB00A61B97A6F105194D0EAE3B54F77B525D1F357,
	YandexAppMetricaStackTraceItem_set_FileName_m8EDA02A46D4A4377951B83FC67B4F530F2B56B0D,
	YandexAppMetricaStackTraceItem_get_Line_m47028D86A4C6E6D6FB5148963F56EBDBAB202F0A,
	YandexAppMetricaStackTraceItem_set_Line_m13C5C828B1682CFC01DD90113E3675CFE72CCE9A,
	YandexAppMetricaStackTraceItem_get_Column_m4D1E2CE061688D6A779D61E0DAD3F66AE19D5332,
	YandexAppMetricaStackTraceItem_set_Column_m9CD343280DB2716828D408477995C6C0703AD434,
	YandexAppMetricaStackTraceItem_From_m04570D149AB6E01023505E8721700A80C8F382D1,
	YandexAppMetricaStackTraceItem_GetGroupValueOrNull_m275A1EE217D7761E879FEC23B897716B19B8975F,
	YandexAppMetricaStackTraceItem_ToString_mF25A7B5729E735081DD38B31D6591AC416C082BC,
	YandexAppMetricaStackTraceItem__ctor_m1DDB7BEC07800298D9567042D1023B28CA59C293,
	YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA,
	YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0,
	YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030,
	YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4,
	YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED,
	YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351,
	YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA,
	YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0,
	YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB,
	YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C,
	YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246,
	YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727,
	YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101,
	YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092,
	YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E,
	YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF,
	YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA,
	YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447,
	YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2,
	YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1,
	YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7,
	YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC,
	ChatController_OnEnable_m025CE203564D82A1CDCE5E5719DB07E29811D0B7,
	ChatController_OnDisable_mD49D03719CAEBB3F59F24A7FA8F4FD30C8B54E46,
	ChatController_AddToChatOutput_m9AB8FA8A32EA23F2E55795D8301ED0BF6A59F722,
	ChatController__ctor_m39C05E9EB8C8C40664D5655BCAB9EEBCB31F9719,
	DropdownSample_OnButtonClick_mF83641F913F3455A3AE6ADCEA5DEB2A323FCB58F,
	DropdownSample__ctor_m0F0C6DD803E99B2C15F3369ABD94EC273FADC75B,
	EnvMapAnimator_Awake_m1D86ECDDD4A7A6DF98748B11BAC74D2D3B2F9435,
	EnvMapAnimator_Start_mB8A6567BB58BDFD0FC70980AFA952748DF1E80E9,
	EnvMapAnimator__ctor_m465E8527E49D1AA672A9A8A3B96FE78C24D11138,
	U3CStartU3Ed__4__ctor_m432062D94FDEF42B01FAB69EBC06A4D137C525C2,
	U3CStartU3Ed__4_System_IDisposable_Dispose_m8088B5A404D1CB754E73D37137F9A288E47E7E9C,
	U3CStartU3Ed__4_MoveNext_mF689BF83350416D2071533C92042BF12AC52F0C0,
	U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA3CCB9B113B234F43186B26439E10AD6609DD565,
	U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m3EF23BF40634D4262D8A2AE3DB14140FEFB4BF52,
	U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_mB1C119A46A09AD8F0D4DE964F6B335BE2A460FAA,
	FBWindowsA2UNotificationsManager_ScheduleButton_m1E1DB09435A056565A733DD84847C9019D531892,
	FBWindowsA2UNotificationsManager_A2UNotificationCallback_mD5ECDC40A31DAAEAC969831DAF910E263C81A599,
	FBWindowsA2UNotificationsManager__ctor_mBCCEB3851695C75D2130EC70E1438AA15BFCD502,
	FBWindowsADSManager_LoadRewardedVideo_mA63B80E8909311DBBCDF248EEB2BDF40D1E13121,
	FBWindowsADSManager_ShowRewardedVideo_m1F84BE9B1757734C8BF3D3428774151748078886,
	FBWindowsADSManager_LoadInterstitialAd_m53B50AE6BB0B60147A5A8DC927DAE4F1957A175E,
	FBWindowsADSManager_ShowInterstitialAd_m6E0127956CFF5DFED5F49E659735C8038CBAB664,
	FBWindowsADSManager_OnButtonLoadInterstitialAd_mDA58548F3C90AFACD1F1FDBB5C88C76F5F394479,
	FBWindowsADSManager_OnButtonShowInterstitialAd_mC7791FE9006248604DC070887C57366CF0024A98,
	FBWindowsADSManager_OnButtonLoadRewardedVideo_mBBEA74C400BA6BECD814B462177CB674F44032C6,
	FBWindowsADSManager_OnButtonShowRewardedVideo_m7476AEB159331175737AB663A0E84FA5A610FDF4,
	FBWindowsADSManager__ctor_m4E8E20D79CD84A71462FBC991B65E4589C22F021,
	U3CU3Ec__DisplayClass3_0__ctor_m251A453E3B43DC6BC2112C50F95F77DC4875B3F3,
	U3CU3Ec__DisplayClass3_0_U3CLoadRewardedVideoU3Eb__0_m754D9117465C8FB5F9100C1B117BF12E70440E1D,
	U3CU3Ec__DisplayClass4_0__ctor_m42B9115CD1146D2372A92D081BCE05985CD5204F,
	U3CU3Ec__DisplayClass4_0_U3CShowRewardedVideoU3Eb__0_m9809B444B20301ABA2F3E2B07C07B94A1EA562C3,
	U3CU3Ec__DisplayClass5_0__ctor_m0DF6D9DEDA40D111C9BBA2E495E5E481E8AFFA38,
	U3CU3Ec__DisplayClass5_0_U3CLoadInterstitialAdU3Eb__0_m4882E26A44D427FA7A811871207580F982465593,
	U3CU3Ec__DisplayClass6_0__ctor_m56DB25DABAACEC78C71EC089971A0F4C1433CCA7,
	U3CU3Ec__DisplayClass6_0_U3CShowInterstitialAdU3Eb__0_mB08457A09A7B46DE8D3F14B88EC4A84953115319,
	FBWindowsExampleTabsManager_Start_m8C61AD09CF633B711F483722EE00C57900D21D04,
	FBWindowsExampleTabsManager_ShowTab_mE7CF605BF66BBEB5819398C232EDBECC90EFB4CC,
	FBWindowsExampleTabsManager__ctor_mEB5F2889C9C25E2BE84D3FDA9E7A0B80B29E5E8E,
	FBWindowsFriendsManager_Button_OpenReceivedInvitations_m758D303C1B87688B9EDA9FFE5FFC5CAD7676E2D7,
	FBWindowsFriendsManager_OpenFriendsDialogCallBack_mD72E11E4C98EBDA98BAAEEB09AE370569DF76035,
	FBWindowsFriendsManager_Button_GetFriendFinderInvitations_mB1577285B99213DCBB689720D5F1E083B63F58E6,
	FBWindowsFriendsManager_GetFriendFinderInvitationsCallback_mF72BAFB745CAF465316CD1166A506529ED5FA2DE,
	FBWindowsFriendsManager_DeleteFriendFinderInvitationCallback_m4EE9D1FB91B9AA763D4D0A68DA31A75874A5C76A,
	FBWindowsFriendsManager__ctor_mC18D6A75FC2D9B17802011A41FB2EA03BD531B73,
	U3CU3Ec__DisplayClass6_0__ctor_mD279371C9EA619A765000E3FD7EF87AFED864920,
	U3CU3Ec__DisplayClass6_0_U3CGetFriendFinderInvitationsCallbackU3Eb__0_m4BC19A757542CB9B0139840529E7D9C34DB03D95,
	FBWindowsGraphAPIManager_Start_m6DD4F1E460767F0BB7458C73341E32B236BE821E,
	FBWindowsGraphAPIManager_OnEnable_m09429F8371FF238D0890A5905EA6F78B63719A6C,
	FBWindowsGraphAPIManager_GraphAPI_mED08E62FF2549BB7F42D77DB74349B2F91B6B4AA,
	FBWindowsGraphAPIManager_SetGraphAPiVersion_m1EBD08D3D823FCCEB2D683CE55953ED5D09BD189,
	FBWindowsGraphAPIManager__ctor_mA2C5E55465E8939693FFCDEE0491D7AE821BA967,
	FBWindowsGraphAPIManager_U3CGraphAPIU3Eb__8_0_m0E7B4C156EBF6318FAC13F8D7CC91D9FE86ADC95,
	FBWindowsInitManager_InitButton_m91585B7DDF180D6DC885ED0698860F4C2BC55C4E,
	FBWindowsInitManager_InitCallback_m9C355A126124B28332B2E50C87AEF92353909500,
	FBWindowsInitManager_OnHideUnity_mEA7D93BF70509FD8D85613E7B328F21047B09C40,
	FBWindowsInitManager__ctor_mE3DF8EE9E8FA9BE75F842720E968914DE8D45C8D,
	FBWindowsLoginManager_LogInReadButton_mD464AA50450B8DCF2BF31AE166EDE4E6EDB78452,
	FBWindowsLoginManager_LogInPublishButton_mF4A5194A80AA8E3513F8D072E92A0E8693790293,
	FBWindowsLoginManager_LogOutButton_mE63114361311C63C41D30BAEDD7D25837F2EA0BC,
	FBWindowsLoginManager_AuthCallback_m1EA6C32AE674B4507BB9AF164B65D5B1F10D4448,
	FBWindowsLoginManager_GetCurrentProfile_m286865D50DF36DD633A27B3BA88B4129E93FC458,
	FBWindowsLoginManager_LoadPictureFromUrl_mC19CD6E89FEBFC0AE1360BA22D255BC4AFF3FB29,
	FBWindowsLoginManager__ctor_m341EF79AEF1BCDB243A3045D2CDE6FF9DCE47137,
	FBWindowsLoginManager_U3CGetCurrentProfileU3Eb__8_0_m170EA42BAD2A057D3413A29A91A6F05FD065A5C4,
	U3CLoadPictureFromUrlU3Ed__9__ctor_m827EA23B5E90833084433C2C188380C10F3A9FB3,
	U3CLoadPictureFromUrlU3Ed__9_System_IDisposable_Dispose_mF930FC66EBBC3D434FF57A27F51969F5961FF78B,
	U3CLoadPictureFromUrlU3Ed__9_MoveNext_mF39A948A94D83C1E91739BF83261977A36E5A79F,
	U3CLoadPictureFromUrlU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C98A8C33509F21B43E220E67944032C515DEA35,
	U3CLoadPictureFromUrlU3Ed__9_System_Collections_IEnumerator_Reset_mEF04196D6410EF119A7F8616B6E698C924FF5B92,
	U3CLoadPictureFromUrlU3Ed__9_System_Collections_IEnumerator_get_Current_m8D035DE9C23C067E0884BEFCE31E0D720DD4E2EF,
	FBWindowsLogsManager_Awake_mDA9315E97E655112AAF12CE8DC662295101E3776,
	FBWindowsLogsManager_DebugLog_m3B4802A0C38BC8BA51F4CE22D774DFC48A2B1B7D,
	FBWindowsLogsManager_DebugErrorLog_m113DD71EC8DE8EC5C4763796B6C47E14CD4F3F11,
	FBWindowsLogsManager_DebugWarningLog_mB3950B0DB164858F93DA7E26A7AF770EEB3B7430,
	FBWindowsLogsManager_DebugClean_mDD86E796937794CA11126DE45D17C12B39BEB659,
	FBWindowsLogsManager__ctor_m2CDF3DCD98FDEFC87A323950CC22C38C837B1F19,
	FBWindowsPurchaseManager_GetCatalogButton_mB285FE3F2C1AE92041601DE223130E205DE91769,
	FBWindowsPurchaseManager_ProcessGetCatalog_mBC691143EF994F995AF20C4185E0E3DBA6F9FCE8,
	FBWindowsPurchaseManager_LoadPictureFromUrl_m8F576F8433A34198C9775644188EFCADBC0C6E6F,
	FBWindowsPurchaseManager_ProcessPurchase_mA20D49D3AAB967C089CE41DF3DA8A0351A6D6CD2,
	FBWindowsPurchaseManager_GetPurchases_mCB24A00C33F68F6CB1ADFF31F3840F124338750A,
	FBWindowsPurchaseManager_processPurchases_m4751E163AB4A2B005B1D84EFBC2A2D37C3BF535C,
	FBWindowsPurchaseManager__ctor_m67504549059953A95E28473A82D9071D40D5A84A,
	U3CU3Ec__DisplayClass5_0__ctor_m8E0D79554FD9F8DDF8F151F779BEC80486594EC0,
	U3CU3Ec__DisplayClass5_0_U3CProcessGetCatalogU3Eb__0_m4CF890B17D5B9D50CD263816F450456E16AFD1FE,
	U3CLoadPictureFromUrlU3Ed__6__ctor_mFCAC1E0CD9AFEF9D4FC7C2B08FC7525F559DA8A2,
	U3CLoadPictureFromUrlU3Ed__6_System_IDisposable_Dispose_m8C674AE011C63B72DCEFF7368DA58D764B79C3EA,
	U3CLoadPictureFromUrlU3Ed__6_MoveNext_m1A03D1B07139C8798F268EAA92134F89793604AF,
	U3CLoadPictureFromUrlU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F863DD15052B9E3A586A1328846AF3C233EBA15,
	U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_Reset_m89151C82740561EB785AF5B2A4AB8303F214CF0A,
	U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_get_Current_m44D460CB604C85FBE166902DEE8B3AF96DF5E19B,
	U3CU3Ec__DisplayClass9_0__ctor_m56D4F574162DAA0DC9EA9494462CCD617008F901,
	U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__0_m672EF6F8DAEF89BA3DD0BFA610B30D9F01130E6B,
	U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__1_m16A8CAD55992864B2DE76CFC1ECE2B903727225B,
	FBWindowsShareManager_Button_UploadImage_m1FFD7CDC7EF00577C2D8DE56396794E10A6338EC,
	FBWindowsShareManager_Button_UploadVideo_m71548715579F703D2AAAD7BD9EAC85B03E96CAF5,
	FBWindowsShareManager_CallbackUploadImage_m23D3F141ABD3F7B5C1ED2495125B844A04271A51,
	FBWindowsShareManager_CallbackUploadVideo_mD73A78415B614804367AC60041621D43CAA62B2D,
	FBWindowsShareManager__ctor_m71A6FCB04FFEF4335E4A2871F560DF65149043A2,
	FBWindowsTournamentsManager_ConvertDataToDict_m957B59DCBCBBA8ADB9BF14CAC897915650000123,
	FBWindowsTournamentsManager_Button_CreateTournament_m48593D0E8A103A49FCE369372C59D67668D79E63,
	FBWindowsTournamentsManager_CallbackCreateTournament_mA8C1C64D80F7D1092EF621BDB587E3856FB16219,
	FBWindowsTournamentsManager_Button_PostSessionScore_m9D92F41F413320DB5633DFF143DA3649D975FBE6,
	FBWindowsTournamentsManager_CallbackPostSessionScore_mB9180114F19BE46EBC92B4093577F1DC4ECFCAFA,
	FBWindowsTournamentsManager_Button_PostTournamentScore_mCDDDD7549C629288461E228D9A6CB2CBE8792BAB,
	FBWindowsTournamentsManager_CallbackPostTournamentScore_mE8DF6C42C53FBCE134D892AA48C5379CEF8B7BBF,
	FBWindowsTournamentsManager_Button_ShareTournament_m2993547EA9296BF2A66B87BB4BDBBED59AFB5F33,
	FBWindowsTournamentsManager_CallbackShareTournament_m42520665AC25B3C5AA001A98A7AC9F63E114D720,
	FBWindowsTournamentsManager_Button_GetTournament_mF86D25202EA500123CC2A1A0E910E467627FA915,
	FBWindowsTournamentsManager_CallbackGetTournament_m62C3F26B7629D13AD79547392BF904925A5B7FF0,
	FBWindowsTournamentsManager__ctor_m65AFDD841835BB7A8550C12F089A9A5CC6D1ACE4,
	FBWindowsVirtualGamepadManager_SetVirtualGamepadLayout_mDE6BE733314A7BA7A039F1ADE930948BDD491619,
	FBWindowsVirtualGamepadManager_CallbackSetVirtualGamepadLayout_m048B38EA808953D897CC2599977DF0DFE7BBABBA,
	FBWindowsVirtualGamepadManager__ctor_mF19C463251E64906F96CDD79C29649B2E379A2AF,
	Vehicle_Start_m0C9A75B095211A28573B012EF3BEEEE1B08EE8D1,
	Vehicle__ctor_m70D39ED21C861189C612A13D1B5B5E3A96AA3054,
	Vehicle_U3CStartU3Eb__3_0_m8DF14843247458CB99FABAAF5BE561C39D380DB1,
	TurnPoint_get_TurnDegrees_m14981448C9EE217B4501CD90B3FD50CC0C6DC778,
	TurnPoint_get_RotationPivot_m1B00DBB2B581E1500BB9179606C54326D1ED2FC8,
	TurnPoint__ctor_mB57C81447C3A4E8036EAAACFD4000D7CAECD4034,
	ItemScore__ctor_m71508B74DCD66DDEB8E6D220F3DE9D11E5FC8C52,
	Metrics_PrintInfo_m13BFBC7C6406F103BA3501ECBE555E521CCE2E07,
	Metrics__ctor_m1CD8F01A46856A1A4C04C9869C3A9CB52E9EDD7A,
	NULL,
	NULL,
	LevelLoader_Start_m2462B25C4957882610B17EF83DE17A75411407F2,
	LevelLoader__ctor_m21BE708E25A22A44C82AD416564756EAEEA869E6,
	LevelLoader__cctor_m83E64011E188EEEA2ACF8CE0F266C761AFC2BFF9,
	U3CU3Ec__cctor_m0A8A2388F9F88FAC8D5560F84CDF4B0D8F54E3AA,
	U3CU3Ec__ctor_m4953004BC22BE53939200E58C10E88F4F1F6C614,
	U3CU3Ec_U3CStartU3Eb__2_0_m8BEA0BFB2966989091ABA1E3027244294CEDBB09,
	MetricsCalculator_Awake_m43D18675F9825D2445AFB7D48896F99DF295B49C,
	MetricsCalculator_SendLevelStartEvent_m094CB475A4EAE60B25ECF54FDC9702B3FD46C6BE,
	MetricsCalculator_SendLevelEndEvent_m9AC1332F50754278A8F2042A43B85C5D48F4FB51,
	MetricsCalculator__ctor_mD6AD4B03F08BF54BC81159470D478B3D7783788B,
	MetricsCalculator__cctor_mA28F9EA5B3EB8EE43349CF0DFF7C6DD90EF601FC,
	MetricsCalculator_U3CAwakeU3Eb__6_0_m92D0E2111652BCF92DAA7DB4D85411E24C3069AD,
	StartTutorial_Awake_m6C173CFD0CA88462F361810DE415D6ACA5798030,
	StartTutorial_Start_m60C179D0272A1CD538FC81F5AE55A58A253C9C02,
	StartTutorial_Update_mB3A7847314E61BBD585EBD2F4940A9C5D733AFA4,
	StartTutorial__ctor_mD57F3F87B9A18483B317618D29B8B3EDC487118F,
	HumanCountChanger_Start_m0C8B8463984C2E1832E5B7074710615387FD2B31,
	HumanCountChanger_SpawnHumans_mF64C13564885622DD482590A27EB64139617DD58,
	HumanCountChanger_RemoveHumans_mF779874CE6E5525A43A347BBAB9BEB15B8688526,
	HumanCountChanger_DelayHumanDeactivationCO_m1D1169F418E5DF8A82B0DAA1226513314513288D,
	HumanCountChanger_UpdateHumanPos_m1358795A387708B438BE7E246B2857911B8D217C,
	HumanCountChanger__ctor_mCCB5D782C2B0C042FB877A3BBB11A5CD3FBC45BB,
	HumanCountChanger__cctor_mA08D097893FAB63BE6264C475164CE0855D401C6,
	HumanCountChanger_U3CStartU3Eb__7_0_mC53795D79807F7970D785A229C4B8136ECCE8885,
	U3CDelayHumanDeactivationCOU3Ed__10__ctor_mE7CE726F6CE2A066E894EE2374E865C6CF6250ED,
	U3CDelayHumanDeactivationCOU3Ed__10_System_IDisposable_Dispose_mBCA7352CA4DBD971EB7FAFEB4F839882A5A9D328,
	U3CDelayHumanDeactivationCOU3Ed__10_MoveNext_mD9C23104485E42A5CAC8FE3786E2C6A27AE99294,
	U3CDelayHumanDeactivationCOU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4DC17A3A1469794014EBCFB36D95A8E1DEAF7329,
	U3CDelayHumanDeactivationCOU3Ed__10_System_Collections_IEnumerator_Reset_mB8FC6490EEA649CFE564CB77E0BAFC598F2ED2CE,
	U3CDelayHumanDeactivationCOU3Ed__10_System_Collections_IEnumerator_get_Current_m1883DA14A08E63B1C4EC7637413333AB5923BA09,
	HumanPool_get_Inst_m3AFD4F792A5EE69CEEE43FAE407F65B82FB49454,
	HumanPool_set_Inst_m5BAE41B30730C1F56DA07F464E3948E1C85612B0,
	HumanPool_Awake_mCE3EBCF00FA019E62BE8B646CEB5BB1B76310D30,
	HumanPool_Add_m87B6D2532632CE3AB34F443EE84689B7D077B0A7,
	HumanPool_TryGet_m88DFE549C40CE0B62401F26D7179D24A3E4DA9BA,
	HumanPool__ctor_m783BE38D0439353A5883A7B769B1A9DD8AA0EAA0,
	Attractor_get_Humans_m59412ED65961704207810CB86F743D47AD4B4323,
	Attractor_get_Inst_m3B4D66CD2D0B3F54C12A9EBE1F183A088A254084,
	Attractor_set_Inst_mB2E04661214E6E2DEC06683A8A4E796DA6C766F1,
	Attractor_Awake_m27EB7E078030FF00E5E9C66A02BFBFA9B2A0117D,
	Attractor_Start_m5754CAFE1899C40473D6E755350EC028AD9F36C3,
	Attractor_FixedUpdate_mC36EC9F43486E216EF76EC080431E60897C0B7CD,
	Attractor__ctor_mBD19F128D20410642A25445B20FB0BD15C252306,
	Attractor_U3CStartU3Eb__10_0_m4E6A9D948CCFEC800184132B6AD86E8387F5DACA,
	Attractor_U3CStartU3Eb__10_1_m4851FACA4A9A3274CF555993B4192610DCF104C2,
	AttractorForwardMover_get_Inst_mC5CEE88B0C4F323509DC0C99F20A57AF03FB1ED4,
	AttractorForwardMover_set_Inst_m7DFB58EFB271B373D2AB769F294538E6C7C187DC,
	AttractorForwardMover_get_StartSpeed_m04816FEB7046AE5396B39C0F6E33B7081CCCEAEF,
	AttractorForwardMover_get_CurrentSpeed_m65553D2692FE358F9B88C003E1AEA67713322991,
	AttractorForwardMover_set_CurrentSpeed_m66E4052D0EE4689EE59541C9AAC51F2B99C7639B,
	AttractorForwardMover_ResetSpeed_mB97C9C0149C01C68AAFEFB7F2822062A1AF52B1B,
	AttractorForwardMover_SetSpeed_m2AACB9CF45F203857FF98FD90DDF60932C517197,
	AttractorForwardMover_SetStartSpeed_mD74E2D46214970CABCEC547C45921645A98AE9D8,
	AttractorForwardMover_Awake_mB14773A6C2225B4CC49A7B119294750B61A3EEEC,
	AttractorForwardMover_Start_mD7515ACAA22030D319D855A9721067F8901B408D,
	AttractorForwardMover_Update_m9EA33B690D100A8EF667CEF440F5D31A7D23ED00,
	AttractorForwardMover_CorrectXPosition_mE8786D403AD78292E402C244879FFC985B6B8088,
	AttractorForwardMover_CorrectXAxisCO_m4CFFB7A3C3313FCCB45EB49AACF7F76E1DD14FDC,
	AttractorForwardMover_Move_mBBADE7C75781925730C17B6886197F084959FAE5,
	AttractorForwardMover_MoveToEndCO_mD63E5A61A5602D65335409FA8EC972FED80F7DD8,
	AttractorForwardMover__ctor_mEF9B52D735B63DCB74D348E8B928A6C7A2B93CA4,
	AttractorForwardMover__cctor_m29429F5165F3A92950A394CBDA0A9BC95E0FFD1E,
	AttractorForwardMover_U3CStartU3Eb__21_0_m5A1C98C7F5102A0FF9D3EDFE9055961F4ADF33D1,
	AttractorForwardMover_U3CStartU3Eb__21_1_m6C8022354EFDB1B06F1AD9D822A69893AACB2165,
	U3CCorrectXAxisCOU3Ed__24__ctor_m7B0E05EC173F7CF39DBF42E3A6B477A4253FEF8E,
	U3CCorrectXAxisCOU3Ed__24_System_IDisposable_Dispose_m419471812079070146C0E03F364774EE7D0A9ADE,
	U3CCorrectXAxisCOU3Ed__24_MoveNext_mF69427A22E5BDF2716381CC0F7744C6FBB3D8901,
	U3CCorrectXAxisCOU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDB433624B54BF11744FC0002322D0EF8E50F561A,
	U3CCorrectXAxisCOU3Ed__24_System_Collections_IEnumerator_Reset_mD64D77CD313E3CA5D3E091DA4AB4E6A747EC7E9F,
	U3CCorrectXAxisCOU3Ed__24_System_Collections_IEnumerator_get_Current_m37CE776C8A0EFAEC4D4CE554360B5794AC4CDE5F,
	U3CMoveToEndCOU3Ed__26__ctor_mAD7F0035B13B92CAE54B7129113EC730A949D906,
	U3CMoveToEndCOU3Ed__26_System_IDisposable_Dispose_mAC25B4C8AC02477994CAC40F7521EFEB87924267,
	U3CMoveToEndCOU3Ed__26_MoveNext_m1CA1C41EE47EFC6A648E552A1DAFEC14B8FB46AE,
	U3CMoveToEndCOU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m98D175BDBD5CCA03733B438EC7B7518A71159822,
	U3CMoveToEndCOU3Ed__26_System_Collections_IEnumerator_Reset_m4F0502882EB75A34AFC8ADDECC33E3D7387D5812,
	U3CMoveToEndCOU3Ed__26_System_Collections_IEnumerator_get_Current_mFEF685B8D64DBEC141E17E3BF832FB7BD0209A49,
	AttractorRotator_Start_m1DA3F923B1C66157DA0237D4EC362D52581E0A44,
	AttractorRotator_RaiseOnRotatedEvent_m0B28EFE22444142E39085E8996D38F10818E8B1B,
	AttractorRotator_RotateToEndPoint_mD3E655091C610BD151B62374F1C53D4454693304,
	AttractorRotator_SetDesiredSpeed_mE98FDEA58707463E2506707385F74D97659DE3F0,
	AttractorRotator_RotateAroundCO_mB49CACF58499B8334F2B9A25CC580677AF856B18,
	AttractorRotator_OnTriggerEnter_m21F34D3FACB5C1442488C3E8A07215FD14F44BE4,
	AttractorRotator__ctor_m9FCC638D697BDC53784DDBC7F252287DCFC0A1F8,
	AttractorRotator__cctor_m8410B5D5F8188357A18C32D7B1CAECE301D73104,
	U3CRotateAroundCOU3Ed__12__ctor_mAA3FC64CC0F60DB438579733CF492269DE1D7CD5,
	U3CRotateAroundCOU3Ed__12_System_IDisposable_Dispose_m88F30E4B8D9C27D5EDA61B4EEC1111B606551738,
	U3CRotateAroundCOU3Ed__12_MoveNext_m49B47873C9995E0DA185C34F00E8907585470002,
	U3CRotateAroundCOU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m91918835C1DD81F6D4167F98CC126BB80689601C,
	U3CRotateAroundCOU3Ed__12_System_Collections_IEnumerator_Reset_m4D69B4769D3AACCD0040A083E6309114B24A183A,
	U3CRotateAroundCOU3Ed__12_System_Collections_IEnumerator_get_Current_m65F646D4C780FA98EA2D5DC64C97553876F54EFB,
	AttractorSideMover_get_XConstraints_m8EC81A0E3FB8217894697EAD4C0316FD521899BF,
	AttractorSideMover_get_Inst_m12946F827E2BEFD8018EE52CB58D8C9572268440,
	AttractorSideMover_set_Inst_m7E6DC27D04A563C8C3527F17B2896F23FCD243E9,
	AttractorSideMover_Awake_m51C58705FBE9C5C1E7EC304C5879E01B478DC715,
	AttractorSideMover_Start_m81A6EC8EE8ABC302BB76BDDF8634CE8DB35703D3,
	AttractorSideMover_Update_m8C7F1DA05FE189B3E36BEBD5BBACA0C93CEA1EC3,
	AttractorSideMover_MoveAttractionPoint_mEFA325F8E4D2ACAA2902C5D291C8A26E9B9B8E8C,
	AttractorSideMover_SwipeInput_m6EA9A248F9466864AFA8C15939B88B5EE44C4028,
	AttractorSideMover__ctor_m5074918823FFA2F88B3A2D008344A2A52857BD5F,
	AttractorSideMover_U3CStartU3Eb__13_0_m4DFCA47CAFB5875EB9D979CDFE68496904B7C811,
	BoostersDeactivator_OnTriggerEnter_mB6ECFDBF09422562CEA8A66DF3B62EF66C431F49,
	BoostersDeactivator__ctor_mC0CC82C366BDDDD6789D2C630C8C4459A2F30F09,
	DecisionEmojiDisplay_Start_m96E4B6EB613EF09A0C34EDAE18F11CB5869AB12E,
	DecisionEmojiDisplay__ctor_m96DAF07FEE26DB6B60F89123D9FE666356E13A4F,
	DecisionEmojiDisplay_U3CStartU3Eb__1_0_mA21A5E3F03B76DC72CE4869CCA6B210340B8FB50,
	HumansRotator_Start_m111BC48AC94CF2DD5E42CD30969931809B78372C,
	HumansRotator_RotateHumansCO_m186590E1B00E19223BF88C7C5C36BF5EBFC6CF90,
	HumansRotator__ctor_m2D29439032D10D8D8B6DC293004F36637AE2E933,
	HumansRotator_U3CStartU3Eb__2_0_m8698CBAECAC59C5481CAA31CA7E396CB540ED862,
	U3CRotateHumansCOU3Ed__3__ctor_m307842B7BB6BC29EFC7DF03B092BB9608BB37A79,
	U3CRotateHumansCOU3Ed__3_System_IDisposable_Dispose_m80DAF99B9B8E1E5A5B0A575DB7D0E53138069541,
	U3CRotateHumansCOU3Ed__3_MoveNext_mC567533330C500278CDE56D727A273155758E45A,
	U3CRotateHumansCOU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2856ED2785CA040B5485141DE3355FD2B3C8EF50,
	U3CRotateHumansCOU3Ed__3_System_Collections_IEnumerator_Reset_m19DDA8E68ABDA47D39FCB1A3DAC8F395290C2A0F,
	U3CRotateHumansCOU3Ed__3_System_Collections_IEnumerator_get_Current_mBC9082A8B1C7964A40422A1BE3A67EB863B5AE97,
	HumanAnimationChanger_Awake_m1B2FACA1B5D567C38F7921DB22B8357426ABA7ED,
	HumanAnimationChanger_Start_m72CA8841E88D20F888C215836243533C62F600D4,
	HumanAnimationChanger_OnEnable_mBF204AC369021E9DF197040F24AA274222A96AB1,
	HumanAnimationChanger_Update_m7DAC418F9971C50ABE33C2E745BC8E174F153DEB,
	HumanAnimationChanger_SetVehicleAnim_m8432113AAF6A751E902CBC1CD01F0CB3C118212D,
	HumanAnimationChanger_SetWalkAnimOffset_m8325830041543B5EAC665A63BE40EFF107752AD5,
	HumanAnimationChanger_ChangeAnimation_mE0011D458453F84AA38D7C4151FFBBBC1C96E3E6,
	HumanAnimationChanger__ctor_m2B43AD6213CB7A432A12FDA86B9351F573B80AF0,
	HumanAnimationChanger_U3CStartU3Eb__7_0_m60202920F816F8450B422E0945AAB6F3F615A6E2,
	HumanDrunkScaler_OnEnable_m3E4880765FCE26B11B494694EB18742CB7E53DC2,
	HumanDrunkScaler_Start_m9F6A72446CBA695E616EB425A2FD6F43A91A81DA,
	HumanDrunkScaler_ChangeDrunkScale_m40BED17051DC64A07E1AFCDD954477BF564691B8,
	HumanDrunkScaler_ChangeBlendAmountCO_m87E07D5BB255316921AE48D103B28DC30A459A76,
	HumanDrunkScaler__ctor_mF7C13FB427FEBC3F9183E183E69D58A98E98A3FF,
	HumanDrunkScaler__cctor_m7BE17DE980E7A1D76AB29C9CD089AC0484C697A7,
	HumanDrunkScaler_U3CStartU3Eb__11_0_m2A521456F42081ED4F907FE4FDF214AA947160AC,
	U3CChangeBlendAmountCOU3Ed__13__ctor_m5E09769B750810854DC5FDDAD262249A3F229AD4,
	U3CChangeBlendAmountCOU3Ed__13_System_IDisposable_Dispose_m6727C2BBC9AE8136D6547C4973A6BF9C38B06F55,
	U3CChangeBlendAmountCOU3Ed__13_MoveNext_m71E1106634CC894789EE8B8E398BCA90F9F645F9,
	U3CChangeBlendAmountCOU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEB5FEDC50201D7064173A94C6E60206FDF756A3,
	U3CChangeBlendAmountCOU3Ed__13_System_Collections_IEnumerator_Reset_m467590D6FDE33C1ACAB09493A6DC0D8669E61097,
	U3CChangeBlendAmountCOU3Ed__13_System_Collections_IEnumerator_get_Current_m5A6F3B2FAA454C12603E88A6B7142ACC9E493557,
	HumanItemSetter_Start_m0CAC95A749764191EEF7EB8A1E49513659764917,
	HumanItemSetter__ctor_mB5DEFA5E143AA99378AA9DD72AF50D136F464D45,
	HumanItemSetter_U3CStartU3Eb__3_0_mD0288A236A9619DDD60BBD6D2B219DA037EEEEDF,
	HumanMovement_RotateToTarget_m7BD7C51D46ED481242A92984934F72E4776D976A,
	HumanMovement_Awake_m7868B91475E9098262830E37C4F9B549DFAF9738,
	HumanMovement_OnEnable_mA188ADB0444B6471B2B1B10FB91F75BD9EAFF259,
	HumanMovement_AddForceToTarget_m7F73C02696A7892F236272CCC6ABDB713623CC83,
	HumanMovement_MoveAway_m76F7CFB42C81DE56C88D932F05D0176207ED3E61,
	HumanMovement_MoveAwayCO_m52D652E86FB31B8170C674FD8EA3F940562762BC,
	HumanMovement_RotateToTargetCO_mBD7AF80C96FEF12EECE31BF6ACF23FDA7C90B6DE,
	HumanMovement__ctor_m509DA19AD03160FB8D00D0008CF258DC06876D21,
	U3CMoveAwayCOU3Ed__12__ctor_m49A20CCEAF998C3BED99861E3799867E5760D770,
	U3CMoveAwayCOU3Ed__12_System_IDisposable_Dispose_mE06CDD9DAA132B2D7618D74A3FB046C81A505F7D,
	U3CMoveAwayCOU3Ed__12_MoveNext_m77A61B0DC347AF8543CC8FC8EC96E3BAD44F1BBD,
	U3CMoveAwayCOU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A853900B3FEDD1E714FDCFFF66DF89B9582740A,
	U3CMoveAwayCOU3Ed__12_System_Collections_IEnumerator_Reset_mE6725EA11861EC7B577798DFD21011C09018C09A,
	U3CMoveAwayCOU3Ed__12_System_Collections_IEnumerator_get_Current_m1F2065F279FFAF9D7978EE1A552E3E261AA8F643,
	U3CRotateToTargetCOU3Ed__13__ctor_mA59FBC9689A06EAC9BF16ACC7E5B916FD493AEBF,
	U3CRotateToTargetCOU3Ed__13_System_IDisposable_Dispose_m1A653EBE0CFE54B369E81F936BC7044E4A4EFFC3,
	U3CRotateToTargetCOU3Ed__13_MoveNext_m992A323752FB59A6E751187C786A00E3CA3373FC,
	U3CRotateToTargetCOU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m20B08BD3FEE757F907EF0DDD1F1AE6F8036966E2,
	U3CRotateToTargetCOU3Ed__13_System_Collections_IEnumerator_Reset_mCF175367FF8536618BFD3647A4A1A5F2FAD9428A,
	U3CRotateToTargetCOU3Ed__13_System_Collections_IEnumerator_get_Current_mB618BABECF468B44C2375613D0121B3B4CA1A3AD,
	HumanXPosClamper_Update_mD3BE28541540F77359AEDD316F2722B54611C475,
	HumanXPosClamper__ctor_mB621BA2DBBD7DAECC71F1D3695A3D66558E4A1FD,
	DecisionParticlesDisplay_Start_m9145390189BA022B3C49E56036DE3A315877686F,
	DecisionParticlesDisplay__ctor_m2FD2C3EFE8A6985713D79AB06D2CDF2DE4275936,
	DecisionParticlesDisplay_U3CStartU3Eb__2_0_m763904E6AE886D840305D271AF844EDF35D1F56A,
	U3CU3Ec__cctor_m367E06021AFBD46106375E0D368D53E040DCB4E9,
	U3CU3Ec__ctor_mFBCFD7A6F57DCC841374B4BBDE31C5684615FD17,
	U3CU3Ec_U3CStartU3Eb__2_1_mF6F512D75F26369DDC0F7DDDB7029B72CD9E9F28,
	U3CU3Ec_U3CStartU3Eb__2_2_mD430BAF14C73CC7606BB86DB21ABFC719AB76F05,
	FinishLine_ResetTime_mFC12376EB00301CAB194C56060E26EEDD5F909EF,
	FinishLine_Start_mB2CB07D865515EE411A2B67474E29A4ABBEC64BB,
	FinishLine_IncrementTime_m745B8875B81C31E72978A65F37F6CDFC7A522C8A,
	FinishLine_OnTriggerEnter_m339034A6E92DE0E1F071E38F3DC2CCA35E927D04,
	FinishLine__ctor_m5BEFFE7AAC5C51EA09CC18895D77842DB22A3372,
	FinishLine__cctor_m6EA6D972DFED009534FC466B282A8791C901BBD5,
	Gender_get_Inst_m30E43499377E373C496FE6DDC255D2257F0D2BEE,
	Gender_set_Inst_m8A5F027F570C9596CC5E82685CC6276656146D34,
	Gender_Awake_mCF843D204C416B24CABE39FCE19F81A3C71413AF,
	Gender_GetTag_mF28040D9FF05E2094CD8A10163DC787FEB58E5B4,
	Gender_GetPrefab_mBFCFDC433E5169DC03B86CECEF962B1E6D4CF8F6,
	Gender__ctor_m94D3B7BD7C515DD2D1DF811859C57893F0730ADF,
	Literals__cctor_m64B6BC23A53CB45AEDD11E7C4E9A83C9674E1D16,
	CameraFinishAnimationPlayer_Start_m7324C9D0A92CE5C76148858942AC0BE24B33B871,
	CameraFinishAnimationPlayer__ctor_m1DAC6F4FBD89551DEE6BBC5DA3F51B253F6201B0,
	CameraFinishAnimationPlayer_U3CStartU3Eb__2_0_m70A038E8859A381B328D0DDB0B51499BC25D3137,
	EndCanvas_OnClickNextLevel_m2FB822729A94A20782DE25C009862038D5B73157,
	EndCanvas_Start_m20B4A2AED8D60489335B633CB029E9570D6B3677,
	EndCanvas_ShowEndCanvasDelayed_m1E8C9B4C6BB4B6B85B099473443AF07B200969C6,
	EndCanvas__ctor_mE03FD4C61D5DE25CAB7E100F9D4768120CCA9AC3,
	EndCanvas_U3CStartU3Eb__4_0_m514D63BB14F05AB7A4D0388ABB18E3FFFDC35799,
	LevelLabelSetter_Start_mF8C5FE5FDF6BC47D4DBC56B04A7E2040309AC1A9,
	LevelLabelSetter__ctor_mA78CFC71C6FD9BF1452A4EE998CABDC20F5E3248,
	HumanChangeDisplay_Start_m5A4880E55A247DD7E7039F770DB4114A7356C24E,
	HumanChangeDisplay_ShowInfo_m68A596A50278BCCCC82804EF2A52D0554B9810E0,
	HumanChangeDisplay_DelayedHideCO_m0760805DC23A32962ACA41EE037461E6C0D17EC3,
	HumanChangeDisplay__ctor_mEDC469193E67EAF4FCF9C1AB66E9F85A97439874,
	HumanChangeDisplay_U3CStartU3Eb__7_0_mE0613DE139DF91ACBEF97F293ECE229F6E4A6BB5,
	HumanChangeDisplay_U3CStartU3Eb__7_1_m9159909BEBD82CD42A8E585FEB3A65CEC5844F83,
	U3CDelayedHideCOU3Ed__9__ctor_m3F7F3BCAD6A6F5F8F08D1996154A844F1DEC956A,
	U3CDelayedHideCOU3Ed__9_System_IDisposable_Dispose_mEA4B857D35276FFED245D1AF10AD4510471B5541,
	U3CDelayedHideCOU3Ed__9_MoveNext_m07D160D5A2EA3ED5162E09BFF3BE1958E3C7418B,
	U3CDelayedHideCOU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52BF89F42463046E01904973D0F889E4F323711A,
	U3CDelayedHideCOU3Ed__9_System_Collections_IEnumerator_Reset_mD37BE559FF61231171A2DFFEDDB15832362A73C6,
	U3CDelayedHideCOU3Ed__9_System_Collections_IEnumerator_get_Current_mAB0F1828753CDC3F8590F6205AB24E09678A0CEF,
	ProgressStage__ctor_mB0F13BEC19C8C698897579169896D8346D417A26,
	ScoreChanger_get_Inst_m0048D18120047BE782737DA39E793E213C655FF7,
	ScoreChanger_set_Inst_mAA0340F9682C52885920C4E9B720328B9C9548D6,
	ScoreChanger_get_StartScore_mF27D5417A8E3ED1A6CD80E13B9375BCD67227A2C,
	ScoreChanger_get_MaxScore_m405184D1C4B2E9141D0505AC2D22075FE02FDE9C,
	ScoreChanger_get_MaxHumans_mE001F5390ABB6612F03AC272D208F1BBA5235F86,
	ScoreChanger_get_CurrentScore_m29CFD76A479FE7761FAD6D6147772BCC6F6EA37B,
	ScoreChanger_get_HumanCount_m565F55EB33DA591DDAC85BE6EDA4F2E4C4E7B212,
	ScoreChanger_Awake_m909DEA9219D616EA4F884E7921E6CB158534599F,
	ScoreChanger_Start_mA3336F8FB5C27CA2CE209690A80522E7C2FF2B06,
	ScoreChanger_ChangeScore_mEC2B6355941D07459A29455C9729ED64CC697D78,
	ScoreChanger_CheckForSpawn_m58636542070E46E212A81649ECF7B21E5061BD6F,
	ScoreChanger__ctor_m6C7A753121C5B946B0B6777E3C470C93A8D6E709,
	ScoreChanger__cctor_m88780B74FBAFC8BFEF79C9EE9D6743ECE60A088D,
	ScoreDisplay_Start_m8B936925806D7C6828853E4EC7BD83F74EFBF63E,
	ScoreDisplay_SpawnLines_mB8035F2268688B33CC31E5D05B0D5275695C1E93,
	ScoreDisplay_UpdateVisuals_m2B4BC056F4DDD15D2BCF07C0CB8A35FDCF47F533,
	ScoreDisplay_GetCurrentStage_m44B5A984892BE614E8C081F9D8F2C31AAFB4EA92,
	ScoreDisplay_UpdateBarCO_m3DFF97617B0F1780C78E954206B1DDDD5E32A275,
	ScoreDisplay__ctor_m4B8577AE2FCD91D37520A768E9E6D7D74C6C4966,
	ScoreDisplay_U3CStartU3Eb__13_0_m460A8B74886C1CB2B8BF7923D4C333C98C2DD655,
	U3CUpdateBarCOU3Ed__17__ctor_m7D296A5C4AAC9D665B1115D4241D6E3A9D7A665E,
	U3CUpdateBarCOU3Ed__17_System_IDisposable_Dispose_m08AB083A2CC058A563A6B690093EC1CB3B568280,
	U3CUpdateBarCOU3Ed__17_MoveNext_m7A1833D61D83C22B7F332718971E2B1923B4E01E,
	U3CUpdateBarCOU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8772C89919EF7032F56CACC9DD2DF8E393D5B951,
	U3CUpdateBarCOU3Ed__17_System_Collections_IEnumerator_Reset_m69B11C198453AAFEEED8623052E8040C7FE824E6,
	U3CUpdateBarCOU3Ed__17_System_Collections_IEnumerator_get_Current_mD72D7EB2A4C485AC1D227522D1C23D3906F60EBF,
	ScorePlacer_Start_m9D167CD5B813B0282AD4C7396B27058559C339FC,
	ScorePlacer_LateUpdate_m9C6433E0FB31166F6EEDDEB8E3B4BCB2ED676A44,
	ScorePlacer__ctor_m271999733D36C60F2AA5446505ED520EA5F2FFA5,
	HumanBarCanvas_get_Inst_m29BE40EAED5B02B05C8B734DDD5A8EB6F92E4072,
	HumanBarCanvas_set_Inst_m8558951CD5BF2CECFD8B54F3F7D3A4843C217925,
	HumanBarCanvas_get_MaxScore_m9D30FFC5E87C493ECA42136C61FE0C6ED39EEEC8,
	HumanBarCanvas_get_NextIdToUnlock_mD5CDDFEDD87DABC429450048ED9DCA0B6D0F690A,
	HumanBarCanvas_get_Items_mED9B9E8777E430475CB358580E9E2A4FBB4160F1,
	HumanBarCanvas_GetCurrentItem_m71AC044C1C52A34EC3918B3F363060CCAD0D2BEA,
	HumanBarCanvas_Awake_m65180621DD05F14AC5F568D6147625D8F80ED560,
	HumanBarCanvas_Start_m0BE6620AD10441069810785477CC836B4FF5747F,
	HumanBarCanvas_PlayBarAnimaiton_mDF9D9B845B0600EA4AE307E8D3F31C7D7F47B515,
	HumanBarCanvas_DelayHideCount_mE43AC72A20AAE287F88584BE64C4DE274DD6CFD7,
	HumanBarCanvas_AddNextIdsToList_mCC9FAA0AAF8C5C59AC44EBEFBE50065BA88B80B3,
	HumanBarCanvas_UpdateItem_mA3E590A74212ED4D5280905105CB20DA66136F97,
	HumanBarCanvas_ChangeFillAmountCO_mCBA182A2B698B2C4CE24E59CB1A70B26CB174BA7,
	HumanBarCanvas__ctor_mF251419CB707EE5A478E59CD8E00D46B84462053,
	HumanBarCanvas__cctor_m758119BA7713D4CE86682FCBABBE9DC158517FB6,
	U3CU3Ec__cctor_m7D34EE402919C5AF3F346056C7DE7364D425AA80,
	U3CU3Ec__ctor_m170ED8C3A32511A1BFB3312E919CD6EF6EBAD17A,
	U3CU3Ec_U3CUpdateItemU3Eb__33_0_m7244FE5CB23B8D657D8E72DF734DA5C1922E6A87,
	U3CChangeFillAmountCOU3Ed__34__ctor_m213907A9171CA62CF79C5D07BE5EEDB29A6F4279,
	U3CChangeFillAmountCOU3Ed__34_System_IDisposable_Dispose_mD682971D6BB177950939A686F56330060C1EC833,
	U3CChangeFillAmountCOU3Ed__34_MoveNext_mCC40C74B3B429FF636F1000A49DA818A4CFC04C9,
	U3CChangeFillAmountCOU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEAE78B612CA509788CD3FD6BF5663418FC2AC022,
	U3CChangeFillAmountCOU3Ed__34_System_Collections_IEnumerator_Reset_mDF1798840E95D844EF641DF5D1872139748D579C,
	U3CChangeFillAmountCOU3Ed__34_System_Collections_IEnumerator_get_Current_m2C90EAB666BBEBA7A46CB0021F27AB5ED2759AF7,
	HumanBarItemDisplay_get_Inst_m6A75DB819D410B93BA5648966DB0A3A5C966DBF4,
	HumanBarItemDisplay_set_Inst_mD78C0E6F96EB25D9F5E3A34CC323268AEAEA8AA6,
	HumanBarItemDisplay_Awake_m0395B8EC6FF91CE2F1C7A96B15D3AB0FF25A84BE,
	HumanBarItemDisplay_SetUpIcons_mC894F28A15DF19692E07A3D3286B5F492A030166,
	HumanBarItemDisplay_SpawnImage_m7811A5BE8CABAA6F736E0A33F24260D39356BEDE,
	HumanBarItemDisplay__ctor_m372C8221F6EFDE1050C9F052FD9DD19C4B35BDAB,
	HumanCountDisplay_Start_m4B004F9810A7B4CDFCAD6E21DB3CBC929CE994A1,
	HumanCountDisplay__ctor_m27FA18031F95747AB4A85501975AE8AFBC18D24B,
	HumanCountDisplay_U3CStartU3Eb__6_0_mA72B41CD8D237D42622DDCDB4D08C77D051893CA,
	ItemForHumans__ctor_m03E16B2480DBF108887605088A68683397F70C45,
	ItemUnlockDisplay_Start_mA40B182EBA1E6AC3FD9B0470C0C695F4111B3034,
	ItemUnlockDisplay_PlayDisplayAnim_m22E81DD054C8B67A8A59075234E3F6ED32CA0484,
	ItemUnlockDisplay__ctor_mB83B906EBB8C4DD34FA3CAAA4C60AF4BF8D93F13,
	BaseScoreBooster_OnTriggerEnter_mBCCD41238F5C9A46E462DDF34BDD4C81C9DDB0DD,
	BaseScoreBooster__ctor_m19C7E5FD9FF5802C72EB848E245CB61D845AC1EB,
	BaseScoreBooster__cctor_m8C5669F0BC5E734DE95428B3B17BA0724F91A106,
	Gate_OnTriggerEnter_mB4262C62D32F2AA4E0B00F88CFF4A50E9D0D75FE,
	Gate__ctor_m185F7D6B0BFD193C9CFDC5911D29CB17BBA9B612,
	Item_OnTriggerEnter_mA7AA890F4E9872C794703C07868A001258E23128,
	Item__ctor_mBDD4B4FC0FDA13E46D7DF191BBE29D69F7A450B8,
	KeyPressExample_Reset_m6C0693C17C679DAE8C7E095035DF39A97506B4BE,
	KeyPressExample_Update_mDEFEBF8B9FC6B2472881B72AAEE2B1DBF4B7E00C,
	KeyPressExample__ctor_mB49C401CC6085A1AE05FCA3F3842637A764C8F06,
	SSH_IntVector2__ctor_m6DCAB9DF4EFE06D52F266D0F7F414EE1EB4AED87,
	ShotSize__ctor_m551AD9DD799A76C11C535275B87813BF7B57A6EF,
	ShotSize__ctor_mC56B5336C1E5F0F6DD88C636B9E04520FADE9A49,
	ShotSize_ToString_mA7F731024E2CC795C8C89611606ABAFA4F730B77,
	ShotSize_GetFileNameBase_m597683DC4D1AEE6C479EB57AEC6EDABE8194F12A,
	ShotSizeComparer_Equals_mADC5B38AE3C386D6E7A4FBCA9D45E505AA295B8D,
	ShotSizeComparer_GetHashCode_m3FA42E471B3EAE6E459056254DD75F3ED6A6122D,
	ShotSizeComparer__ctor_m525F8F739EAE2E01D7634D8EB0A8E0A2F0AB3B80,
	SSHDebug_Log_mAE54F2D6652EFC7A1F13535C922D38E945F857B9,
	SSHDebug_LogWarning_m99B9DCE19469392B3D0A84D74EA29725C5323E08,
	SSHDebug_LogError_mA019C5D4FDD870156678072DD99EB9F7D603C66A,
	SSHDebug__ctor_mEB48F736E60357572C91FE8BF15075E3DE74ABD8,
	SSHDebug__cctor_m639F542C618676E3595A3EECC65B94376A22F58A,
	SSHPreset_Save_mDDA5115797D54616F19F40E4BC4733012054549D,
	SSHPreset_Save_mFAF4FF7039DC05EE687654D18A341DDDBC034796,
	SSHPreset_Load_mF42FAD276F2AE141DF9B9B0632C2CBBDB4C97629,
	SSHPreset_DefaultSavePath_m33744671093A2D1F6D4AB7CFC9CDDB25682141EC,
	SSHPreset__ctor_m5B8FB66873C55ADF86039D0F84A66061EB6541E1,
	SSHUtil_CombineCamerasNonThreaded_m7DBF23703546512DDE58EC6206FB3BB75102312B,
	SSHUtil_Combine_m97692ED8090BD0588D2B6B7A8E143C529CA35023,
	SSHUtil_CombineTexturesThread_mE8C32C4569E939FC853FEC64358C15B13EF0F5DD,
	SSHUtil_CombineColorArray_m5FB80CE22F1C0017CDE720CA40E386F33CE48A48,
	SSHUtil_GetCameraTexturesColors_m00C930915E64AFCBB3667DEAB78AF42DEFB55751,
	SSHUtil_SaveTexture_m800AF1EA151D6A11182CFBDDE7710145180E255B,
	SSHUtil_GetScreenBilinearScaling_m45B634C4DEA535CB75C856F1E73121DB49F23C88,
	SSHUtil__ctor_m709257872CEFC7FFAE56C0A894F1A20B8905D91B,
	U3CU3Ec__DisplayClass2_0__ctor_mECEE7F0F93F1E99B5F3079A1BA3AB3A4C3643A3D,
	U3CU3Ec__DisplayClass2_0_U3CCombineTexturesThreadU3Eb__0_mAE24C3075C7F2FD33EF5332B7883D3E3D4223DA8,
	TextureScale_Point_m37B707D7E31C93026C7FAD70AE8FE2BA6914D9A7,
	TextureScale_Bilinear_mBE367801FDE367F8065380867D721CFC411C6845,
	TextureScale_ThreadedScale_m1442D66B9D639AA806A1AD84BCF88B678E2315AD,
	TextureScale_BilinearScale_mF5F013C6FE2F9CA584C3DDC10A20D3323D79289F,
	TextureScale_PointScale_m1B588C79A50088C6ED032040F854AA351154B812,
	TextureScale_ColorLerpUnclamped_m062221AAC51EBF0BA4AEC7A51726D1428433D544,
	TextureScale__ctor_m90A1E864C1C0A7AA545EB1E257C080689F51A7A4,
	ThreadData__ctor_mA17317152FE8447E38D217E9EACA5A10C386E5BE,
	ScreenshotHelper_get_textureFormat_m72FE9C294334384351F61C49DDC955CF20FF7502,
	ScreenshotHelper_get_Depth_m0361E5CBD97D6F8D6ACDDA81D0C4CF898962ED3B,
	ScreenshotHelper_get_instance_m7EE39E4869DEAF81B765C2D39C36B9DC4E222766,
	ScreenshotHelper_Awake_m6AD5347A8C384FD92E5C5FD2CFEA97F88FA9861C,
	ScreenshotHelper_BuildSaveLocation_m73C7403085233A9A9E8C0B42086219C6E64202B3,
	ScreenshotHelper_Update_mE994EF10F9C1F00746DB2ADEE9D84DF905736C18,
	ScreenshotHelper_UpdateDimensions_m1FF3EBE8A624B43CF992FEF17B3F1F8AFC88976E,
	ScreenshotHelper_WarnCanvases_m85B9FC05DA8A2E2E09C522725289B5B556F6E253,
	ScreenshotHelper_GetScreenShots_m68D3B341B883C0221A633876DD19D149E8380656,
	ScreenshotHelper_GetFileNum_m6B8BD319BD9EE9FB520E1A80312EACF9A91495C5,
	ScreenshotHelper_get_IsTakingShots_m1E2FC7042AC6004500113115C46620809535C2C7,
	ScreenshotHelper_set_IsTakingShots_m2EC0E3EA8D66A00E776984780B1C1F6F61D59AF2,
	ScreenshotHelper_TakeScreenShots_m6A5EEE6B201E0F88EE457A54FC918E487362E411,
	ScreenshotHelper_RunFinishRoutine_m840BA0A07D13F0497D0A8D913DCB22CB6209E064,
	ScreenshotHelper_FinishRoutine_m2EC58CDA85E155E55FD058B2D8AFFC0F4A3CF6B8,
	ScreenshotHelper_RemoveAllCustomSizes_m01FFBE20B8D7DFD5306F0705AC7CB9346A9DF270,
	ScreenshotHelper_GetScreenShotName_mD1BD4B59ACB979B74215E438990113299D7BE77E,
	ScreenshotHelper_SetDefaults_mA2A4A9F96E903CFEFB556417BDB39C0D18090A09,
	ScreenshotHelper__ctor_m01EA9959DD1E1983515D5747717AEA41D28FA625,
	ScreenChange__ctor_m6DEF8E0EEB35C63C36F4F01F01B12E182DE39A38,
	ScreenChange_Invoke_m6BBEDFE735B9A92811DC0EE18F5B22E716A276A0,
	ScreenChange_BeginInvoke_m8CF9E928B57FBD04AE032A48E14A042E3D024AD5,
	ScreenChange_EndInvoke_mE46A1EBBDDB9B3A14C280A38C38B8BE99DA36A32,
	PathChangeDelegate__ctor_mD5E488012552B9DF75A57E97D5C1F9FB9CB675D3,
	PathChangeDelegate_Invoke_m312F8613CA6C2F567710C9AEFF3E726260514975,
	PathChangeDelegate_BeginInvoke_mE57C66FF4F6FEDAAE68663AC4A611F600841459F,
	PathChangeDelegate_EndInvoke_m7CE99284DCC5DC0C037C1A9FE00DAC04D9803F77,
	DefaultsSetDelegate__ctor_m40ECF530FF38F95EFA6E92967D86B1B45D85C254,
	DefaultsSetDelegate_Invoke_m1B4C62FA864E4A4D4AF842EB350A6B8D8D6DB9BE,
	DefaultsSetDelegate_BeginInvoke_m378F9FB09C817EAC1EAD9E469BABA6AB166F60D2,
	DefaultsSetDelegate_EndInvoke_m85DC23A18F3487BC418B1D7EEC57CFB139592ECC,
	U3CU3Ec__cctor_m18D53755F9D162A63A64A6D3C2A3CBCD7958B14E,
	U3CU3Ec__ctor_m746C6628BD4EDF5473B439CC103E2D080271F03B,
	U3CU3Ec_U3CAwakeU3Eb__25_0_m584C42A9D9E2599FEA791BB377FA8B38A7EA2ED6,
	U3CU3Ec_U3CTakeScreenShotsU3Eb__40_0_mF5198A89A7A18C8D8B6FF41E895AC7E3A50015A5,
	U3CU3Ec_U3CSetDefaultsU3Eb__47_0_m8B09DC90AB50EB56D89B8218FB752E1EDEED4355,
	U3CU3Ec__DisplayClass40_0__ctor_mECBE689C6EA8EF81C4944982E2EC94E50BCC852C,
	U3CU3Ec__DisplayClass40_1__ctor_m871F7AC1D28F8522785EAB34AD57D8AF45317051,
	U3CU3Ec__DisplayClass40_1_U3CTakeScreenShotsU3Eb__1_m2E83B2EE2832A7F0CA1A715A16AAEC927126A12C,
	U3CU3Ec__DisplayClass40_2__ctor_m14182BB0AF5B72CC5DADA5CACD6F91127CA9A8EA,
	U3CU3Ec__DisplayClass40_2_U3CTakeScreenShotsU3Eb__2_m239A9A2710255928EF85C9AC41E311EFBDA03FE1,
	U3CTakeScreenShotsU3Ed__40__ctor_mB87366B5F3A6E47BD226C8F4FB01D3AFDBC0658D,
	U3CTakeScreenShotsU3Ed__40_System_IDisposable_Dispose_mEADAA3BA5BA5AAA0E1D806B5CEA01FE9ECA69739,
	U3CTakeScreenShotsU3Ed__40_MoveNext_m826A0851F599205CE3304A4FFAC947D3E3043ABB,
	U3CTakeScreenShotsU3Ed__40_U3CU3Em__Finally1_m5BB502470A091DBFC44CD32BFCD511C34096267E,
	U3CTakeScreenShotsU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD107EBC3704A50AE4678CF640241B330B754A65,
	U3CTakeScreenShotsU3Ed__40_System_Collections_IEnumerator_Reset_m1456FEF783D118E72FCE8F7B6DBE582BB0FB8BAB,
	U3CTakeScreenShotsU3Ed__40_System_Collections_IEnumerator_get_Current_m306F0D9AEA14323432D48D9B4D71715F88BDAA8F,
	U3CFinishRoutineU3Ed__42__ctor_mE842F5732E7178127C6122D40527D51028373220,
	U3CFinishRoutineU3Ed__42_System_IDisposable_Dispose_mBABDC89E3ABB0CAA196EEB99C09DB316A90C9902,
	U3CFinishRoutineU3Ed__42_MoveNext_m60AB957C55C7772051FEA47C827F446B489B4889,
	U3CFinishRoutineU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE509A1E9B0335B4D908AED6D0EC422B99F292337,
	U3CFinishRoutineU3Ed__42_System_Collections_IEnumerator_Reset_mD8A03FFC1A55FABD33B121D0B13E2F375C8BBA85,
	U3CFinishRoutineU3Ed__42_System_Collections_IEnumerator_get_Current_m87B28A4BD70F8CCD207FBE4E14056026DE5AEEBD,
	ConsoleBase_get_ButtonHeight_mF81259A974C9E3C4B24AFB8D95A18F0A03EE3396,
	ConsoleBase_get_MainWindowWidth_m9D6DB2FC65DC5D7FA781E5CF2FDB945C760D3C1E,
	ConsoleBase_get_MainWindowFullWidth_m7238BF9690E4397727DF038E6B185AFC2F7A1BF8,
	ConsoleBase_get_MarginFix_m286762B25357CC839197F05CC557CCFA376B7DB3,
	ConsoleBase_get_MenuStack_mA1E88A5414EA46C243855D30F28FB58F507F7597,
	ConsoleBase_set_MenuStack_mDC687D0701EEDAD9D55A44AE9449326C5E6ADFDC,
	ConsoleBase_get_Status_m71AFE45D2F68B01846188F212D65923B5B341728,
	ConsoleBase_set_Status_mFD36D24FF2D3D6554F11859251BB325B750776D2,
	ConsoleBase_get_LastResponseTexture_m02F8A694917953E5B184AC489DBE600009451DCE,
	ConsoleBase_set_LastResponseTexture_m8ED57EA554542EB683B1484F5DDE13ED983A146D,
	ConsoleBase_get_LastResponse_m5BCC50E8189B285B0AE6244435A8A9F6E3D4CE85,
	ConsoleBase_set_LastResponse_m847D45A344585AFCFCE231CF8993E2A750C76547,
	ConsoleBase_get_ScrollPosition_m489494F56C1E8E36B530B9CEBF1973640D39A47D,
	ConsoleBase_set_ScrollPosition_m7C2D74B4FF2432875A98B2F5A70F4D02494A9C84,
	ConsoleBase_get_ScaleFactor_m54D2E9E038B321F36372AB6284799232475B37F2,
	ConsoleBase_get_FontSize_mBA25F85EA4D6916062FE3D049BDE8BF618D5189F,
	ConsoleBase_get_TextStyle_m08AB60C7174363AE850D9F15A5C606E73D766704,
	ConsoleBase_get_ButtonStyle_m28EF2E33654CE9FC915EBECA78D93778517322E2,
	ConsoleBase_get_TextInputStyle_m99CA0D3F64E54CCF5DED958ACB141D07EEFB0C13,
	ConsoleBase_get_LabelStyle_m97006D9788464D58A9BA885AD2348D784699C346,
	ConsoleBase_Awake_m8068C221C280D202F4051E0CBFBF91C77568CCD7,
	ConsoleBase_Button_m8787498ECF036B9B3B5EB6B2FF49AFA154282D10,
	ConsoleBase_LabelAndTextField_m72E1BBF75934CE747195CB87737A2D7EFC503A8A,
	ConsoleBase_IsHorizontalLayout_m90873C8D21DF82E9733E95CD43BFB72A54912B1D,
	ConsoleBase_SwitchMenu_mA4A6A237A2D4EE813268204D38391A9D2AB7BC34,
	ConsoleBase_GoBack_mA682B2317560D91C931680AA95C1AD390611304A,
	ConsoleBase__ctor_m2295736CFFF716F434C20994E95820657BA9C751,
	ConsoleBase__cctor_mE537FEF66506B08BAF97CD2B40D29210C530F6BB,
	LogView_AddLog_mF87B865A91948F6D3F59502861BF67B6354B4A0E,
	LogView_OnGUI_m6B78F78EC906C89DA0BE45F5D3C5571126542376,
	LogView__ctor_m23A534F52CC925EE10260A5EC32DECBDADE2F35D,
	LogView__cctor_m112A3FBD481C9FC1A99F57426E9D79AC9E36F226,
	NULL,
	MenuBase_ShowDialogModeSelector_mB52DA9E57B0AF80ED97B7951B1815424F939A5D6,
	MenuBase_ShowBackButton_m33BAD66D85A5FA9E564FF8CF85E8920842238BAE,
	MenuBase_HandleResult_m0CB446ED4B8BDA605B140E61A4A1C6B442765E65,
	MenuBase_HandleLimitedLoginResult_m5A42F3F12FA695D59588DCC12004870D55C4ECB9,
	MenuBase_OnGUI_m2EDD4E22A69914B99CBDF039142129959C363D97,
	MenuBase_AddStatus_mA9B44C51B6D228B6EB901EA6FDEC17B6524FF98E,
	MenuBase_AddBackButton_m546C0ED7A454CD1CC80C9BCE27E56D924E6FCDC6,
	MenuBase_AddLogButton_mDCB6003139C36CE1485D8F6C70C23BF7A13FB812,
	MenuBase_AddDialogModeButtons_mCEA0B4B8B4C88A0A8F9A7B4737B4595B0FE5B208,
	MenuBase_AddDialogModeButton_m8F24FD4F294616E73BEC80B082FADB4D73BF1AC2,
	MenuBase__ctor_mD1A153F6EBCE35B5990669A20787B391A5DEC0E2,
	AccessTokenMenu_GetGui_mAFFC7AADE6A3C5A549A15922B3933F868690FBB7,
	AccessTokenMenu__ctor_mA506557143C1CEB6F2D52ED9EECC44FB9058804C,
	AppEvents_GetGui_m4D6548C60C8A0B6B81EB16E4F20416013669AE09,
	AppEvents__ctor_m633F317D3E69F6B62705498B7790C36075F3C09B,
	AppLinks_GetGui_mEF6BABE28307C19F823198102718BF2DCBE91FC2,
	AppLinks__ctor_m2408DE5760F132BFD7437824410EE9FA14FE7F02,
	AppRequests_GetGui_mF21A92393C08E39EA4404B8AD9DE1076A42A7060,
	AppRequests_GetSelectedOGActionType_m350F98087C7EB39851FC4562007A9EC26261BA1A,
	AppRequests__ctor_m22F0E79DD38013C0846E20AC2E9F96FCCE6356D8,
	DialogShare_ShowDialogModeSelector_mCF0A9C2537886392CC684FBD4939F14C6B8A1F87,
	DialogShare_GetGui_m5A303622B0B9250A1C0E9570683CE6F5DC894783,
	DialogShare__ctor_m18343E0A2E25DD13D50F65E99F855EE5CBB4A44F,
	GraphRequest_GetGui_m04AC165B02447897B6210A4EEA01341C54A18E7E,
	GraphRequest_ProfilePhotoCallback_m377E44982A0745303405A4B2792BEAEA617DC962,
	GraphRequest_TakeScreenshot_mB6D07D0BD896A3FDA1B3A0CECD1F41A82BB71153,
	GraphRequest__ctor_m1893756902051EDCA6A648EFF3F8C79482D72F17,
	U3CTakeScreenshotU3Ed__4__ctor_mC5022BC2D6F58E67E8D34863FDDD01DB102192A9,
	U3CTakeScreenshotU3Ed__4_System_IDisposable_Dispose_m024CE39BF1690FA910DDA8A774BFC512D437756F,
	U3CTakeScreenshotU3Ed__4_MoveNext_m1BC8573BD27ED010119E112AA3BE6CA166C05D31,
	U3CTakeScreenshotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF4F64034B62BD451ED5DB8EF972FC4B40806FC23,
	U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m99D229E478D52F853F19ADCBCFFDAF25C148D899,
	U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_get_Current_m13E1B2CBD35D3D58C012334F0A4FD17B3930C030,
	MainMenu_ShowBackButton_m0AA293F10C340E46851503EF2B29E235FE61BBE8,
	MainMenu_GetGui_mBEAC140C4E2DC7BEE3B2F1FA3AA744770B6BE1BF,
	MainMenu_CallFBLogin_m07CFAA572C425B0EF1CDD4E7B7A906AA7DA8AD3E,
	MainMenu_CallFBLoginForPublish_m5519242C5D4241EF52CA37F78A5BCEEF18973A19,
	MainMenu_CallFBLogout_mEE96298E9614D3F79009BB034E4DB1047A7855C3,
	MainMenu_OnInitComplete_m36800A94B891CDDCC9C4DAED0CC5639190C2E207,
	MainMenu_OnHideUnity_mDE312A6C6A2FE6F756E72A64388E31F5BE626D84,
	MainMenu__ctor_m15C7560C4A0296BB1D433FA3D8B1C82568B7179F,
	Pay_GetGui_m38BDD0E07950F97403560C5AAD4D35F4ABE590AA,
	Pay_CallFBPay_m6C1243E4AA248F715366AA5E8996D25431AA2A58,
	Pay__ctor_mF524FF0E64FFA62C166094B9CFE640D276161A26,
	TournamentsMenu_GetGui_m2DB7B4FBCBB150B9A9AA56743F8AD986EAFDA459,
	TournamentsMenu__ctor_mA3069507B062E55BF40EA9C97FEDBF5C64B69705,
	WatchSelector_OnValidate_m3187EE5800AEC1EAA3E5FC50D7477C6667DB55C5,
	WatchSelector_ValidateObject_mC8735DF2FDE8891DB0CB00229B287CD8622EEC33,
	WatchSelector__ctor_m1679FC905C81AE2831AEE51CE33087DB95075AA2,
	TieSelector_OnValidate_m71BEEB34D86C0682DB3BA4138C51152C90417CF8,
	TieSelector_ValidateObject_m2974D2A280B47C54F57A615C27F0496F7A2AE604,
	TieSelector__ctor_mAFEE5AFD02BBF387BC4E4399A85306001F2B70BE,
	SkirtSelector_OnValidate_mBFA17B87D9B1A61B2D1F21E7AC70B2514609764D,
	SkirtSelector_ValidateObject_m81FB9F4CCF1D9B662E94D84E212FA836F6561C68,
	SkirtSelector__ctor_m98D4C4B4623A697F46933F89C7B75A6A12FAB4AA,
	SkinSelector_OnValidate_mAFE8548D6C6625409E666D3254197FD7AFE76090,
	SkinSelector_ValidateObject_mE710A1914B4EB1ADD8F3B411F370DF13F4B4D7F6,
	SkinSelector__ctor_m7B0993243886FBE8E6DAD767B3371990FF9B8B40,
	ShoeSelector_OnValidate_m3DD10D212A4FF15BE36460B89B6C3A78716CE705,
	ShoeSelector_ValidateObject_mEB0290F63B81E2D517F9CBD9C58C111C1B0F97F6,
	ShoeSelector__ctor_m04B3C78FA3A733B9D1EFD410D367D616486B07D2,
	ShirtSelector_OnValidate_mFB8DB2B4C3C802C06D79A746559D471AE2F90739,
	ShirtSelector_ValidateObject_mD916D651B7A3E7104953D15325AE7BFB5241B466,
	ShirtSelector__ctor_m820AA91886BE944D341E7BB021021689850CDABB,
	PantSelector_OnValidate_m9089B22899B203A026BEC09B46672D2D3346DA0E,
	PantSelector_ValidateObject_m5C5437773FCC653B6F12E7A4999D76C6A068BC8D,
	PantSelector__ctor_mBF5840072A2EF1232320D8C44EF9444CB31D92CA,
	LegSelector_OnValidate_mE49195E0D427D949DB1BDF19CD3A3FF793283A2C,
	LegSelector_ValidateObject_mA5E0A19F81DFC9C5D14FBE5BC5EC242F99D747D0,
	LegSelector__ctor_m5643364B6019ED2D63DE0A301197B3ED0DAA7459,
	JacketSelector_OnValidate_m6C17178A665FBE61293948EC2841CB3449EF63B6,
	JacketSelector_ValidateObject_m3EEF31E5052A5CF6D891DE86A0EC868DB8F97EFB,
	JacketSelector__ctor_m8F3C8C699AA88F607C75801F0336890813077AF5,
	HeadSelector_OnValidate_mB22820EAB85E43D6FF64DA19308969F5853F5D93,
	HeadSelector_ValidateObject_m8F578BCACDC64D1933F36FAD3E2374AC9353A8F1,
	HeadSelector__ctor_mAEE6822315CFFCD9B1D6A1DC00C21B4794DAB1A3,
	HeadphoneSelector_OnValidate_m90ECB96DB1D9426F6FC0A21763BEAC787AD07604,
	HeadphoneSelector_ValidateObject_mAD1103B556A0B9311FA3BDF12B741F60FFBFD80B,
	HeadphoneSelector__ctor_m0BDD51673CC2E889DB459498AB0D44040D8F9840,
	HatSelector_OnValidate_mCE68923D2FC5C401EF65A82FD812622BD5A6F357,
	HatSelector_ValidateObject_m63AD18D4BEE3905638C256025AB70C0A96095000,
	HatSelector__ctor_m113B6E684D38DE448EFDE1EAD48AB7F2749F39D9,
	HairSelector_OnValidate_mE81CEE912A32AA44F7C6C4CFF7A6578C84D1807C,
	HairSelector_ValidateObject_m644A24C34EFC8B37C48E379BE0F297E2A7B84A21,
	HairSelector__ctor_mF292E8E01ADBC4F271C0791969D8F1D21BB62C68,
	GlassesSelector_OnValidate_m22D07FDF322DFF4C8CF751E51891A717A44B7417,
	GlassesSelector_ValidateObject_m5C695CFF3E1346B9E95414B8BCA4D46F281F8E5E,
	GlassesSelector__ctor_mAFFE23D4657671D282E8517A37D890ECED20AFB7,
	FatnessLevel_OnValidate_m5D345BFBF5073DDAB87F95C66E3BC8E45D86B2A8,
	FatnessLevel_SetFatValueForGameObject_mDC5DEA8480FAE18EE1315EA558EA0938C1D3F18B,
	FatnessLevel__ctor_m13EB3AA1B1C6017234F850EC0627BD8623EC50F6,
	FannyPackSelector_OnValidate_m1EC742DACEB6352E10AF9EE43C76783D282FDABD,
	FannyPackSelector_ValidateObject_mE1D8F2BABFFBC07274542F5599D6427D8B3E0633,
	FannyPackSelector__ctor_mF914501350A971F0281A67E067A4F92D20C956F3,
	EarringSelector_OnValidate_m62F2D1A3BC3DE3C0F7EB657E20A6DAB220BDFF78,
	EarringSelector_ValidateObject_m59E684A6C10C1AC54AD60C6CEA410F6855CEF639,
	EarringSelector__ctor_mFFD4A662D841B2A65FB597C73957D2444D8F2CE5,
	DressSelector_OnValidate_mCAC8DBE50697C0D7E3846486526F0C7EA6D46217,
	DressSelector_ValidateObject_mEB23256034E0499F442C17EA20F09D751EC2600D,
	DressSelector__ctor_m670E3C253634E558B34A9732AB64520DCD06696C,
	ChokerSelector_OnValidate_mB1CA7DF81B5B87960C42DE004FE82287B3FE0E46,
	ChokerSelector_ValidateObject_mFC98F7D965E54205BFC2BE86F60DCF3F1D3A8FE1,
	ChokerSelector__ctor_m016221A498B7E59D50C0AE481D68FCFB880B532B,
	BraceletSelector_OnValidate_mEB192204463BC75C4D6B7BB37B16EB609632A41C,
	BraceletSelector_ValidateObject_m121F7F19909C05C8A0D656825FFC7AD01A0B43BB,
	BraceletSelector__ctor_m251082CED2D513DC80BB2F494BE068ADE32B6C8C,
	BeardSelector_OnValidate_m974104D6C24A45F9F886F9A2C08F54B083C29EE5,
	BeardSelector_ValidateObject_m97761D2F2089FF529B6983F7C9BD2E4F153A0672,
	BeardSelector__ctor_m9B72A71E554D9E745AD3EC00B93A5ED5F85778CE,
	ApronSelector_OnValidate_mC86932DA40F8F14DBDE386064737CF902112E9DE,
	ApronSelector_ValidateObject_mC2997130CBE29322002C2961E282CB8073ABF454,
	ApronSelector__ctor_m89AA5955922444256B6DE80D514E75A5BA74B2A4,
	TMP_DigitValidator_Validate_m786CF8A4D85EB9E1BE8785A58007F8796991BDB9,
	TMP_DigitValidator__ctor_m9DC5F1168E5F4963C063C88384ADEBA8980BBFE0,
	TMP_PhoneNumberValidator_Validate_mE50FE1DE042CE58055C824840D77FCDA6A2AF4D3,
	TMP_PhoneNumberValidator__ctor_m70833F265A016119F88136746B4C59F45B5E067D,
	TMP_TextEventHandler_get_onCharacterSelection_mA62049738125E3C48405E6DFF09E2D42300BE8C3,
	TMP_TextEventHandler_set_onCharacterSelection_m6B85C54F4E751BF080324D94FB8DA6286CD5A43C,
	TMP_TextEventHandler_get_onSpriteSelection_m95CDEB7394FFF38F310717EEEFDCD481D96A5E82,
	TMP_TextEventHandler_set_onSpriteSelection_mFFBD9D70A791A3F2065C1063F258465EDA8AC2C5,
	TMP_TextEventHandler_get_onWordSelection_mF22771B4213EEB3AEFCDA390A4FF28FED5D9184C,
	TMP_TextEventHandler_set_onWordSelection_mA7EB31AF14EAADD968857DDAC994F7728B7B02E3,
	TMP_TextEventHandler_get_onLineSelection_mDDF07E7000993FCD6EAF2FBD2D2226EB66273908,
	TMP_TextEventHandler_set_onLineSelection_m098580AA8098939290113692072E18F9A293B427,
	TMP_TextEventHandler_get_onLinkSelection_m87FB9EABE7F917B2F910A18A3B5F1AE3020D976D,
	TMP_TextEventHandler_set_onLinkSelection_m6741C71F7E218C744CD7AA18B7456382E4B703FF,
	TMP_TextEventHandler_Awake_mE2D7EB8218B248F11BE54C507396B9B6B12E0052,
	TMP_TextEventHandler_LateUpdate_mBF0056A3C00834477F7D221BEE17C26784559DE1,
	TMP_TextEventHandler_OnPointerEnter_mF5B4CCF0C9F2EFE24B6D4C7B31C620C91ABBC07A,
	TMP_TextEventHandler_OnPointerExit_mC0561024D04FED2D026BEB3EC183550092823AE6,
	TMP_TextEventHandler_SendOnCharacterSelection_m5A891393BC3211CFEF2390B5E9899129CBDAC189,
	TMP_TextEventHandler_SendOnSpriteSelection_m8242C5F9626A3C1330927FEACF3ECAD287500475,
	TMP_TextEventHandler_SendOnWordSelection_mCB9E9ACB06AC524273C163743C9191CAF9C1FD33,
	TMP_TextEventHandler_SendOnLineSelection_mF0691C407CA44C2E8F2D7CD6C9C2099693CBE7A6,
	TMP_TextEventHandler_SendOnLinkSelection_m2809D6FFF57FAE45DC5BB4DD579328535E255A02,
	TMP_TextEventHandler__ctor_mADE4C28CAE14991CF0B1CC1A9D0EBAF0CF1107AB,
	CharacterSelectionEvent__ctor_m054FE9253D3C4478F57DE900A15AC9A61EC3C11E,
	SpriteSelectionEvent__ctor_m89C1D1F720F140491B28D9B32B0C7202EE8C4963,
	WordSelectionEvent__ctor_m3F52F327A9627042EDB065C1080CEB764F1154F2,
	LineSelectionEvent__ctor_m419828B3E32BC3F6F5AAC88D7B90CF50A74C80B2,
	LinkSelectionEvent__ctor_m4083D6FF46F61AAF956F77FFE849B5166E2579BC,
	Benchmark01_Start_m6CF91B0D99B3AC9317731D0C08B2EDA6AA56B9E9,
	Benchmark01__ctor_m9E12F5F809E8FF4A6EEFCDB016C1F884716347C4,
	U3CStartU3Ed__10__ctor_m242187966C9D563957FB0F76C467B25C25D91D69,
	U3CStartU3Ed__10_System_IDisposable_Dispose_m7AD303D116E090426086312CD69BFA256CD28B0D,
	U3CStartU3Ed__10_MoveNext_m5F93878ED8166F8F4507EE8353856FAEABBBF1C9,
	U3CStartU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8F5CE0A24226CB5F890D4C2A9FAD81A2696CE6F6,
	U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_m553F892690ED74A33F57B1359743D31F8BB93C2A,
	U3CStartU3Ed__10_System_Collections_IEnumerator_get_Current_m50D65AEFE4D08E48AC72E017E00CD43273E1BDBD,
	Benchmark01_UGUI_Start_m565A619941AAFFC17BB16A4A73DF63F7E54E3AFA,
	Benchmark01_UGUI__ctor_m9DCE74210552C6961BF7460C1F812E484771F8EB,
	U3CStartU3Ed__10__ctor_m515F107569D5BDE7C81F5DFDAB4A298A5399EB5A,
	U3CStartU3Ed__10_System_IDisposable_Dispose_mFFD5DC6FCF8EC489FF249BE7F91D4336F2AD76AC,
	U3CStartU3Ed__10_MoveNext_mDCA96D0D1226C44C15F1FD85518F0711E6B395D9,
	U3CStartU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m109B5747CD8D1CF40DAC526C54BFB07223E1FB46,
	U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_mC9F90586F057E3728D9F93BB0E12197C9B994EEA,
	U3CStartU3Ed__10_System_Collections_IEnumerator_get_Current_mA4DCEFD742C012A03C20EF42A873B5BFF07AF87A,
	Benchmark02_Start_mB56F21A9861A3DAF9F4E7F1DD4A023E05B379E29,
	Benchmark02__ctor_mE5DCB1CF4C1FDBA742B51B11427B9DE209630BF1,
	Benchmark03_Awake_mDEE8E96AE811C5A84CB2C04440CD4662E2F918D3,
	Benchmark03_Start_mCCFD9402E218265F6D34A1EA7ACCD3AD3D80380D,
	Benchmark03__ctor_m8A29BB2CC6375B2D3D57B5A90D18F2435352E5F6,
	Benchmark04_Start_mD2F5056019DD08B3DB897F6D194E86AB66E92F90,
	Benchmark04__ctor_m282E4E495D8D1921A87481729549B68BEDAD2D27,
	CameraController_Awake_m2D75756734457ADE0F15F191B63521A47C426788,
	CameraController_Start_m749E20374F32FF190EC51D70C717A8117934F2A5,
	CameraController_LateUpdate_m07E7F5C7D91713F8BB489480304D130570D7858F,
	CameraController_GetPlayerInput_m31AE86C54785402EB078A40F37D83FEA9216388F,
	CameraController__ctor_mE37608FBFBF61F76A1E0EEACF79B040321476878,
	ObjectSpin_Awake_mC05FEB5A72FED289171C58787FE09DBD9356FC72,
	ObjectSpin_Update_m7FB0886C3E6D76C0020E4D38DC1C44AB70BF3695,
	ObjectSpin__ctor_mA786C14AE887FF4012A35FAB3DF59ECF6A77835A,
	ShaderPropAnimator_Awake_m3D158D58F1840CBDA3B887326275893121E31371,
	ShaderPropAnimator_Start_mEF0B5D3EE00206199ABB80CE893AA85DF3FE5C88,
	ShaderPropAnimator_AnimateProperties_m9F466F9C9554AA7488F4607E7FAC9A5C61F46D56,
	ShaderPropAnimator__ctor_m51C29C66EFD7FCA3AE68CDEFD38A4A89BF48220B,
	U3CAnimatePropertiesU3Ed__6__ctor_m2B0F8A634812D7FE998DD35188C5F07797E4FB0D,
	U3CAnimatePropertiesU3Ed__6_System_IDisposable_Dispose_mCF53541AABFDC14249868837689AC287470F4E71,
	U3CAnimatePropertiesU3Ed__6_MoveNext_mB9586A9B61959C3BC38EFB8FC83109785F93F6AC,
	U3CAnimatePropertiesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A34F7423FA726A91524CBA0CDD2A25E4AF8EE95,
	U3CAnimatePropertiesU3Ed__6_System_Collections_IEnumerator_Reset_m1C76BF8EAC2CDC2BAC58755622763B9318DA51CA,
	U3CAnimatePropertiesU3Ed__6_System_Collections_IEnumerator_get_Current_m289720A67EB6696F350EAC41DAAE3B917031B7EA,
	SimpleScript_Start_mC4159EF79F863FBD86AEA2B81D86FDF04834A6F8,
	SimpleScript_Update_mBD8A31D53D01FEBB9B432077599239AC6A5DEAFE,
	SimpleScript__ctor_mC91E912195EEE18292A8FCA7650739E3DDB81807,
	SkewTextExample_Awake_m2D48E0903620C2D870D5176FCFD12A8989801C93,
	SkewTextExample_Start_m7577B96B07C4EB0666BF6F028074176258009690,
	SkewTextExample_CopyAnimationCurve_mD2C2C4CA7AFBAAC9F4B04CB2896DB9B32B015ACB,
	SkewTextExample_WarpText_m462DE1568957770D72704E93D2461D8371C0D362,
	SkewTextExample__ctor_m711325FB390A6DFA994B6ADF746C9EBF846A0A22,
	U3CWarpTextU3Ed__7__ctor_m39944C7E44F317ACDEC971C8FF2DEC8EA1CCC1C2,
	U3CWarpTextU3Ed__7_System_IDisposable_Dispose_m54C900BFB8433103FA97A4E50B2C941D431B5A51,
	U3CWarpTextU3Ed__7_MoveNext_m50CEEC92FE0C83768B366E9F9B5B1C9DEF85928E,
	U3CWarpTextU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79CB1783D2DD0399E051969089A36819EDC66FCB,
	U3CWarpTextU3Ed__7_System_Collections_IEnumerator_Reset_mB6C5974E8F57160AE544E1D2FD44621EEF3ACAB5,
	U3CWarpTextU3Ed__7_System_Collections_IEnumerator_get_Current_m5BDAFBB20F42A6E9EC65B6A2365F5AD98F42A1C5,
	TeleType_Awake_m8D56A3C1E06AD96B35B88C3AA8C61FB2A03E627D,
	TeleType_Start_m3BFE1E2B1BB5ED247DED9DBEF293FCCBD63760C6,
	TeleType__ctor_m824BBE09CC217EB037FFB36756726A9C946526D0,
	U3CStartU3Ed__4__ctor_m7CB9C7DF4657B7B70F6ED6EEB00C0F422D8B0CAA,
	U3CStartU3Ed__4_System_IDisposable_Dispose_mA57DA4D469190B581B5DCB406E9FB70DD33511F2,
	U3CStartU3Ed__4_MoveNext_mE1C3343B7258BAADC74C1A060E71C28951D39D45,
	U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1819CF068B92E7EA9EEFD7F93CA316F38DF644BA,
	U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m9B7AEE80C1E70D2D2FF5811A54AFD6189CD7F5A9,
	U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_m5C22C5D235424F0613697F05E72ADB4D1A3420C8,
	TextConsoleSimulator_Awake_m55D28DC1F590D98621B0284B53C8A22D07CD3F7C,
	TextConsoleSimulator_Start_m5667F64AE1F48EBA2FF1B3D2D53E2AFCAB738B39,
	TextConsoleSimulator_OnEnable_mDF58D349E4D62866410AAA376BE5BBAE4153FF95,
	TextConsoleSimulator_OnDisable_m4B3A741D6C5279590453148419B422E8D7314689,
	TextConsoleSimulator_ON_TEXT_CHANGED_m050ECF4852B6A82000133662D6502577DFD57C3A,
	TextConsoleSimulator_RevealCharacters_mAA4D3653F05692839313CE180250A44378024E52,
	TextConsoleSimulator_RevealWords_m0E52802FD4239665709F086E6E0B235CDE67E9B1,
	TextConsoleSimulator__ctor_mBDDE8A2DCED8B140D78D5FE560897665753AB025,
	U3CRevealCharactersU3Ed__7__ctor_m40A144070AB46560F2B3919EA5CB8BD51F8DDF45,
	U3CRevealCharactersU3Ed__7_System_IDisposable_Dispose_m7942532282ACF3B429FAD926284352907FFE087B,
	U3CRevealCharactersU3Ed__7_MoveNext_m2D07AF9391894BCE39624FA2DCFA87AC6F8119AE,
	U3CRevealCharactersU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m754C680B2751A9F05DBF253431A3CB42885F7854,
	U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_Reset_mD12057609EFCBCA8E7B61B0421D4A7C5A206C8C3,
	U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_get_Current_m9FD7DAB922AE6A58166112C295ABFF6E19E1D186,
	U3CRevealWordsU3Ed__8__ctor_mDF8D4C69F022D088AFC0E109FC0DBE0C9B938CAC,
	U3CRevealWordsU3Ed__8_System_IDisposable_Dispose_m2F2F21F38D2DD8AE3D066E64850D404497A131C5,
	U3CRevealWordsU3Ed__8_MoveNext_mC5102728A86DCB2171E54CFEDFA7BE6F29AB355C,
	U3CRevealWordsU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D9A6269831C00345D245D0EED2E5FC20BBF4683,
	U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_Reset_mE5E0678716735BDF0D632FE43E392981E75A1C4D,
	U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_get_Current_m3E9D4960A972BD7601F6454E6F9A614AA21D553E,
	TextMeshProFloatingText_Awake_m600F1825C26BB683047156FD815AE4376D2672F2,
	TextMeshProFloatingText_Start_m8121246A4310A0014ECA36144B9DCE093FE8AE49,
	TextMeshProFloatingText_DisplayTextMeshProFloatingText_mA1E370089458CD380E9BA7740C2BC2032F084148,
	TextMeshProFloatingText_DisplayTextMeshFloatingText_mA02B20CF33E43FE99FD5F1B90F7F350262F0BEBE,
	TextMeshProFloatingText__ctor_mD08AF0FB6944A51BC6EA15D6BE4E33AA4A916E3E,
	TextMeshProFloatingText__cctor_m352D68463FC9600F9139AD78F0176368562F63C6,
	U3CDisplayTextMeshProFloatingTextU3Ed__15__ctor_mD3C24C6814482113FD231827E550FBBCC91424A0,
	U3CDisplayTextMeshProFloatingTextU3Ed__15_System_IDisposable_Dispose_m83285E807FA4462B99B68D1EB12B2360238C53EB,
	U3CDisplayTextMeshProFloatingTextU3Ed__15_MoveNext_m588E025C05E03684A11ABC91B50734A349D28CC8,
	U3CDisplayTextMeshProFloatingTextU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2412DC176F8CA3096658EB0E27AC28218DAEC03A,
	U3CDisplayTextMeshProFloatingTextU3Ed__15_System_Collections_IEnumerator_Reset_mCCE19093B7355F3E23834E27A8517661DF833797,
	U3CDisplayTextMeshProFloatingTextU3Ed__15_System_Collections_IEnumerator_get_Current_mE53E0B4DBE6AF5DAC110C3F626B34C5965845E54,
	U3CDisplayTextMeshFloatingTextU3Ed__16__ctor_m1ECB51A93EE3B236301948784A3260FD72814923,
	U3CDisplayTextMeshFloatingTextU3Ed__16_System_IDisposable_Dispose_m461761745A9C5FF4F7995C3DB33DB43848AEB05B,
	U3CDisplayTextMeshFloatingTextU3Ed__16_MoveNext_m1FC162511DF31A9CDBD0101083FBCB11380554C4,
	U3CDisplayTextMeshFloatingTextU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6A5E330ACDAD25422A7D642301F58E6C1EE1B041,
	U3CDisplayTextMeshFloatingTextU3Ed__16_System_Collections_IEnumerator_Reset_m5A7148435B35A0A84329416FF765D45F6AA0F4E1,
	U3CDisplayTextMeshFloatingTextU3Ed__16_System_Collections_IEnumerator_get_Current_m066140B8D4CD5DE3527A3A05183AE89B487B5D55,
	TextMeshSpawner_Awake_m9A84A570D2582918A6B1287139527E9AB2CF088D,
	TextMeshSpawner_Start_m3EE98071CA27A18904B859A0A6B215BDFEB50A66,
	TextMeshSpawner__ctor_m8409A62C31C4A6B6CEC2F48F1DC9777460C28233,
	TMPro_InstructionOverlay_Awake_m0F92D44F62A9AC086DE3DF1E4C7BFAF645EE7084,
	TMPro_InstructionOverlay_Set_FrameCounter_Position_m3CC1B812C740BAE87C6B5CA94DC64E6131F42A7C,
	TMPro_InstructionOverlay__ctor_m247258528E488171765F77A9A3C6B7E079E64839,
	TMP_ExampleScript_01_Awake_m6E620605AE9CCC3789A2D5CFD841E5DAB8592063,
	TMP_ExampleScript_01_Update_m3D4A9AB04728F0ABD4C7C8A462E2C811308D97A1,
	TMP_ExampleScript_01__ctor_m43F9206FDB1606CD28F1A441188E777546CFEA2A,
	TMP_FrameRateCounter_Awake_m99156EF53E5848DE83107BFAC803C33DC964265C,
	TMP_FrameRateCounter_Start_m9B5D0A86D174DA019F3EB5C6E9BD54634B2F909A,
	TMP_FrameRateCounter_Update_m5251EE9AC9DCB99D0871EE83624C8A9012E6A079,
	TMP_FrameRateCounter_Set_FrameCounter_Position_m1CC40A8236B2161050D19C4B2EBFF34B96645723,
	TMP_FrameRateCounter__ctor_mD8804AE37CED37A01DF943624D3C2C48FBC9AE43,
	TMP_TextEventCheck_OnEnable_mABF0C00DDBB37230534C49AD9CA342D96757AA3E,
	TMP_TextEventCheck_OnDisable_m4AE76C19CBF131CB80B73A7C71378CA063CFC4C6,
	TMP_TextEventCheck_OnCharacterSelection_mB421E2CFB617397137CF1AE9CC2F49E46EB3F0AE,
	TMP_TextEventCheck_OnSpriteSelection_mD88D899DE3321CC15502BB1174709BE290AB6215,
	TMP_TextEventCheck_OnWordSelection_m180B102DAED1F3313F2F4BB6CF588FF96C8CAB79,
	TMP_TextEventCheck_OnLineSelection_mE0538FFAFE04A286F937907D0E4664338DCF1559,
	TMP_TextEventCheck_OnLinkSelection_m72BF9241651D44805590F1DBADF2FD864D209779,
	TMP_TextEventCheck__ctor_m8F6CDB8774BDF6C6B909919393AC0290BA2BB0AF,
	TMP_TextInfoDebugTool__ctor_m54C6EE99B1DC2B4DE1F8E870974B3B41B970C37E,
	TMP_TextSelector_A_Awake_m662ED2E3CDB7AE16174109344A01A50AF3C44797,
	TMP_TextSelector_A_LateUpdate_m1A711EC87962C6C5A7157414CD059D984D3BD55B,
	TMP_TextSelector_A_OnPointerEnter_m747F05CBEF90BF713BF726E47CA37DC86D9B439A,
	TMP_TextSelector_A_OnPointerExit_m5D7D8A07591506FB7291E84A951AB5C43DAA5503,
	TMP_TextSelector_A__ctor_m4C56A438A3140D5CF9C7AFB8466E11142F4FA3BE,
	TMP_TextSelector_B_Awake_m773D4C87E67823272DBF597B9CADE82DD3BFFD87,
	TMP_TextSelector_B_OnEnable_m8DA695DB0913F7123C4ADAFD5BEAB4424FA5861B,
	TMP_TextSelector_B_OnDisable_mF2EF7AE0E015218AB77936BD5FD6863F7788F11D,
	TMP_TextSelector_B_ON_TEXT_CHANGED_m5B53EF1608E98B6A56AAA386085A3216B35A51EE,
	TMP_TextSelector_B_LateUpdate_mE1B3969D788695E37240927FC6B1827CC6DD5EFF,
	TMP_TextSelector_B_OnPointerEnter_mBAF5711E20E579D21258BD4040454A64E1134D98,
	TMP_TextSelector_B_OnPointerExit_m40ED8F7E47FF6FD8B38BE96B2216267F61509D65,
	TMP_TextSelector_B_OnPointerClick_m773B56D918B1D0F73C5ABC0EB22FD34D39AFBB97,
	TMP_TextSelector_B_OnPointerUp_mF409D728900872CC323B18DDA7F91265058BE772,
	TMP_TextSelector_B_RestoreCachedVertexAttributes_m1FD258EC7A53C8E1ECB18EB6FFEFC6239780C398,
	TMP_TextSelector_B__ctor_mB45DD6360094ADBEF5E8020E8C62404B7E45E301,
	TMP_UiFrameRateCounter_Awake_m3E0ECAD08FA25B61DD75F4D36EC3F1DE5A22A491,
	TMP_UiFrameRateCounter_Start_m11EF02C330E5D834C41F009CF088A3150352567F,
	TMP_UiFrameRateCounter_Update_m568E467033B0FF7C67251895A0772CFA197789A3,
	TMP_UiFrameRateCounter_Set_FrameCounter_Position_mAF25D6E90A6CB17EE041885B32579A2AEDBFCC36,
	TMP_UiFrameRateCounter__ctor_mBF5305427799EBC515580C2747FE604A6DFEC848,
	VertexColorCycler_Awake_m8895A9C06DB3EC4379334601DC726F1AFAF543C1,
	VertexColorCycler_Start_m36846DA72BFC7FDFA944A368C9DB62D17A15917B,
	VertexColorCycler_AnimateVertexColors_m16733B3DFF4C0F625AA66B5DF9D3B04D723E49CC,
	VertexColorCycler__ctor_m673CA077DC5E935BABCEA79E5E70116E9934F4C1,
	U3CAnimateVertexColorsU3Ed__3__ctor_m0245999D5FAAF8855583609DB16CAF48E9450262,
	U3CAnimateVertexColorsU3Ed__3_System_IDisposable_Dispose_mF965F484C619EFA1359F7DB6495C1C79A89001BF,
	U3CAnimateVertexColorsU3Ed__3_MoveNext_m5C44B8CC0AB09A205BB1649931D2AC7C6F016E60,
	U3CAnimateVertexColorsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF9600944C968C16121129C479F8B25D8E8B7FDD1,
	U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m319AC50F2DE1572FB7D7AF4F5F65958D01477899,
	U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_get_Current_mC19EC9CE0C245B49D987C18357571FF3462F1D2C,
	VertexJitter_Awake_m0DF2AC9C728A15EEB427F1FE2426E3C31FBA544C,
	VertexJitter_OnEnable_mCD5C1FDDBA809B04AC6F6CB00562D0AA45BC4354,
	VertexJitter_OnDisable_mB670406B3982BFC44CB6BB05A73F1BE877FDFAF2,
	VertexJitter_Start_mDE6155803CF2B1E6CE0EBAE8DF7DB93601E1DD76,
	VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8,
	VertexJitter_AnimateVertexColors_m2A69F06CF58FA46B689BD4166DEF5AD15FA2FA88,
	VertexJitter__ctor_m41E4682405B3C0B19779BA8CB77156D65D64716D,
	U3CAnimateVertexColorsU3Ed__11__ctor_m10C4D98A634474BAA883419ED308835B7D91C01A,
	U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_mB3756FBFDD731F3CC1EFF9AB132FF5075C8411F8,
	U3CAnimateVertexColorsU3Ed__11_MoveNext_mD694A3145B54B9C5EB351853752B9292DBFF0273,
	U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79C3A529011A51B9A994106D3C1271548B02D405,
	U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m15291DCCCEC264095634B26DD6F24D52360BDAF0,
	U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m0B8F21A4589C68BA16A8340938BB44C980260CC9,
	VertexShakeA_Awake_m092957B0A67A153E7CD56A75A438087DE4806867,
	VertexShakeA_OnEnable_m52E2A036C9EB2C1D633BA7F43E31C36983972304,
	VertexShakeA_OnDisable_m52F58AF9438377D222543AA67CFF7B30FCCB0F23,
	VertexShakeA_Start_mDD8B5538BDFBC2BA242B997B879E7ED64ACAFC5E,
	VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77,
	VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38,
	VertexShakeA__ctor_m63ED483A292CA310B90144E0779C0472AAC22CBB,
	U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A,
	U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m74112773E1FD645722BC221FA5256331C068EAE7,
	U3CAnimateVertexColorsU3Ed__11_MoveNext_mA6858F6CA14AAE3DFB7EA13748E10E063BBAB934,
	U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8DD4F3768C9025EFAC0BFDBB942FEF7953FB20BE,
	U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90,
	U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m3106DAC17EF56701CBC9812DD031932B04BB730B,
	VertexShakeB_Awake_mFA9A180BD1769CC79E6325314B5652D605ABE58E,
	VertexShakeB_OnEnable_m4999DF4598174EDA2A47F4F667B5CE061DF97C21,
	VertexShakeB_OnDisable_m2FB32CBD277A271400BF8AF2A35294C09FE9B8E5,
	VertexShakeB_Start_m58786A0944340EF16E024ADB596C9AB5686C2AF1,
	VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D,
	VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F,
	VertexShakeB__ctor_m9D068774503CF8642CC0BAC0E909ECE91E4E2198,
	U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D,
	U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m4DD41FA568ABBC327FA38C0E345EFB6F1A71C2C8,
	U3CAnimateVertexColorsU3Ed__10_MoveNext_mDD84A4116FCAAF920F86BA72F890CE0BE76AF348,
	U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m250CC96EC17E74D79536FDA4EB6F5B5F985C0845,
	U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A,
	U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m496F1BFEADA21FFB684F8C1996EAB707CFA1C5F0,
	VertexZoom_Awake_m29C1DE789B968D726EDD69F605321A223D47C1A0,
	VertexZoom_OnEnable_mE3719F01B6A8590066988F425F8A63103B5A7B47,
	VertexZoom_OnDisable_mBB91C9EFA049395743D27358A427BB2B05850B47,
	VertexZoom_Start_mB03D03148C98EBC9117D69510D24F21978546FCB,
	VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7,
	VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0,
	VertexZoom__ctor_m454AF80ACB5C555BCB4B5E658A22B5A4FCC39422,
	U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A,
	U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A,
	U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6,
	U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m974E92A444C6343E94C76BB6CC6508F7AE4FD36E,
	U3CAnimateVertexColorsU3Ed__10_MoveNext_m6DBC52A95A92A54A1801DC4CEE548FA568251D5E,
	U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m110CD16E89E725B1484D24FFB1753768F78A988B,
	U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821,
	U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m14B89756695EE73AEBB6F3A613F65E1343A8CC2C,
	WarpTextExample_Awake_m92842E51B4DBB2E4341ACB179468049FAB23949F,
	WarpTextExample_Start_m3339EDC03B6FC498916520CBCCDB5F9FA090F809,
	WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF,
	WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98,
	WarpTextExample__ctor_mBD48A5403123F25C45B5E60C19E1EA397FBA1795,
	U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB,
	U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m145D2DA1026419984AD79D5D62FBC38C9441AB53,
	U3CWarpTextU3Ed__8_MoveNext_mCE7A826C5E4854C2C509C77BD18F5A9B6D691B02,
	U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD80368E9B7E259311C03E406B75161ED6F7618E3,
	U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42,
	U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m71D7F84D9DEF63BEC6B44866515DDCF35B142A19,
	DemoScript_Awake_m5A9B6CFA3389D4C10EF5F94B17CAEDB27C1C481E,
	DemoScript_OnEnable_m9C748C4D37F0A232D4118BCF5FC3C9A5A61EC478,
	DemoScript_Co_PlayDemo_m1EDA7270CFB3FC8CCAC732AA11A6AAFA82A09D0B,
	DemoScript__ctor_m41578642433ADC16E0F9EE537A6FE4482AE5ADE0,
	U3CCo_PlayDemoU3Ed__4__ctor_mFC8A932EE905F0ECE492DC18CF3C0B3486CC6159,
	U3CCo_PlayDemoU3Ed__4_System_IDisposable_Dispose_m9A042B92551103B23A247FF81A0339EC208C63BD,
	U3CCo_PlayDemoU3Ed__4_MoveNext_mFEA1565B4CD991681CC8694BC53AF3CB9B88B3EB,
	U3CCo_PlayDemoU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4191EDDCCC56CFFE7A105CF220C645FEE3DC5011,
	U3CCo_PlayDemoU3Ed__4_System_Collections_IEnumerator_Reset_mA2B0BF109FD157D6B7730F0ECAC4B3A8123608A1,
	U3CCo_PlayDemoU3Ed__4_System_Collections_IEnumerator_get_Current_m5F5620CE40C57FD87E0FB69C6CD558C058A8430C,
	TrophyRoad_Awake_mFE9529430C076C0D92C842874AB853FB710F521C,
	TrophyRoad_SetCurrentLevel_mE833B7E51E4AA69212BAD93B29FD0A5ADF4AB496,
	TrophyRoad__ctor_mF7CDD4D83F36AE7301502756EC4AB807E5EADD7A,
	TweenAnimatedUIElement_Awake_m1C1C860CD02449F2F1BABCFFFFE47088B2A61FC1,
	TweenAnimatedUIElement_Show_m6BDFF54757A0536612CAE238C6E1E2FFD9475A5B,
	TweenAnimatedUIElement_Hide_m0C4291929DD091A0BF1E7FAB61EFFFF962C3DF1A,
	TweenAnimatedUIElement_IterateChildrenElements_mEB3FAF651B37699AAE95C47E544F0BE9D23A7F55,
	TweenAnimatedUIElement_Co_DelayedHide_m54535F4FB7AF0838ED198106A07A9F7240ECAD4F,
	TweenAnimatedUIElement__ctor_mDAF16125370A64CC1DD29D0C6323D44AFD8EE56C,
	U3CU3Ec__cctor_m763B14FA262A37185D21E692E22EC5209C43DCC4,
	U3CU3Ec__ctor_mC6E597F503F1D7ED8026C2ABF95989C5B3C307B2,
	U3CU3Ec_U3CShowU3Eb__6_0_m7E452E37F5A3A4107934D125C499F08495081E8E,
	U3CU3Ec_U3CHideU3Eb__7_0_m302E0B7490DB5E04E7B34505F7438E7B319CDCA4,
	U3CCo_DelayedHideU3Ed__9__ctor_m2AA8FF85B089858C08EEE95E8236176EDA7518CF,
	U3CCo_DelayedHideU3Ed__9_System_IDisposable_Dispose_m313FD28C62998A7409B9369CB53511E21B4AFF8F,
	U3CCo_DelayedHideU3Ed__9_MoveNext_m7C89806C90F25F838425E9374C2CD3CB8FCFCBAF,
	U3CCo_DelayedHideU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D7735E9FA873A80226EFC9094DE6ED93A9A1E73,
	U3CCo_DelayedHideU3Ed__9_System_Collections_IEnumerator_Reset_m2B2CF8CD561BFE5F39C03FCA77A3AE1ACE407FD2,
	U3CCo_DelayedHideU3Ed__9_System_Collections_IEnumerator_get_Current_mC0DE7E84AB28C9F4C402542C3F75D7637011BF2D,
	FadeAnimation_Awake_m1F160465C9ABCE6F1552FFDE17EF62E264525D4F,
	FadeAnimation_Play_mC738A0CD89769B20D3D8B1329D7C4ADA2576C21B,
	FadeAnimation__ctor_mB2767B1BC4E316149884FCA5966075358C94E89E,
	ScaleAnimation_get_Rt_m7CF055E4E223CE6A288B66F91E3A95D0A3E2403D,
	ScaleAnimation_get_TargetScale_m2B402A237F43A4BF71895B731D628F810B6741FD,
	ScaleAnimation_Awake_m39331D627713B2883B84694296C14A7DF29AB473,
	ScaleAnimation_Play_mB3D6DBDC6B94EE1259BF06E5A745CC8712A9604A,
	ScaleAnimation__ctor_m851D53B84CA07C72488B7C1E4EEE5336DF9336BB,
	TranslateAnimation_get_Rt_mD8EAEAEFCA4230E7A4DB1B073B7D8A6E16EF882E,
	TranslateAnimation_Awake_mC4D963F7C493A170857DBB78269665A939E57659,
	TranslateAnimation_Play_mD99D8AA287356A53A49B960E2604A751A30DB33D,
	TranslateAnimation__ctor_mC0A54D488C447509917B404A08D6B1B80D8A915F,
	NULL,
	TweenAnimationBase__ctor_m01BE4FE3D775208A2E778F858EBEA79C944D6E15,
	ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60,
	ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF,
	ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107,
	ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832,
	ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2,
	ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5,
	ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A,
	ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007,
	JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C,
	JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55,
	JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706,
	JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A,
	JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D,
	JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768,
	JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58,
	JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B,
	JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542,
	JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF,
	JObject_get_Count_mF9AF92947ACABC66F11C63C58693AEA05545EDF9,
	JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E,
	JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3,
	JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782,
	JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0,
	JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4,
	JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC,
	JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036,
	JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840,
	JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D,
	JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790,
	JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64,
	JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE,
	JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384,
	JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D,
	JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A,
	JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909,
	JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68,
	JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA,
	JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528,
	JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE,
	JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1,
	JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD,
	JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470,
	JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322,
	JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9,
	JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759,
	JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83,
	JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649,
	JObject_get_Item_m46C334AB26DA340F719D09FCA60BCB60C9CD48CA,
	JObject_get_Item_m812085ADF993D5888C5F69233195E5851C80C41A,
	JObject_op_Explicit_m91CE744D7CD627E8A19B081D7CA029436BC82A2B,
	JObject_op_Explicit_m6BB0BE577426EC26C1D78D4A7BE321523AE35DAB,
	JObject_op_Explicit_mCA528C9C1B2A5DE24DA8F54D4FF32D019B152DAF,
	JObject_op_Explicit_m5C37537EB0C5F8C9F7D9A6E297229AD667050407,
	JObject_op_Explicit_mE6AD01C8C18717761A33CDE14188133DF1354678,
	JObject_op_Explicit_mC4C1D472D280F55CBDA46139343207CD54FA09CD,
	JObject_op_Explicit_m58BDB38F8D53BEC03DC2B585BC93619FB8008EA9,
	JObject_op_Explicit_m8C4A8F99EC1181576CF506A9BDAE2EA2A7A461D3,
	JObject_op_Explicit_m95E4E424758D176CE5F782CB330753F69442F8A5,
	JObject_op_Explicit_m0783B9006A4371CCF2D2F07F2BFAB7C6B263E083,
	JObject_op_Explicit_mB57EE7A3507305E88BD0DAF8C50520F13919A52A,
	JObject_op_Explicit_mBD554A7AC5AF77C778FCB838F1F8030860EDE875,
	JObject_CreateString_m2D29F5DF3DA461D2411DD5236006A2E818AF24FD,
	JObject_CreateBoolean_m19A41F29B2C89DA4BB613D8284923113A24CE4A8,
	JObject_CreateNull_mE6BF7B1637ACF216EAD4D562329913ED9EBC15AE,
	JObject_CreateNumber_mDEDBB16F3828F4A3611D58ECFB19C54C06C8321A,
	JObject_CreateArray_mC94F63B6CA87C8CD7DF7D2E5A56F51A55860B873,
	JObject_CreateObject_m11F3D06CA8A08362C226387F51D672F1AA224BF6,
	JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917,
	JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27,
	JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929,
	JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA,
	JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90,
	JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D,
	JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3,
	JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09,
	JObject_Equals_m8D9A02DC9315E65D67684DD25A7FE20072E9ED4A,
	JObject_GetHashCode_m91C908795F81B70ACF230C7E128CE8A9D8139423,
	JObject_EqualNumber_m6ACB2B57B24104A3501EA94263D985B8A27000C7,
	JSONEncoder_Encode_mCC18CF69E4E2EE24AE5E713CE17FBC3DA6CF7756,
	JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04,
	JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2,
	JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0,
	JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1,
	JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46,
	JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA,
	JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584,
	JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D,
	JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8,
	JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D,
	JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E,
	JSONEncoder__cctor_mE8F1C589FE0046B81EB5CF1C3B036D417E957EA5,
};
extern void YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2_AdjustorThunk (void);
extern void YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC_AdjustorThunk (void);
extern void Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA_AdjustorThunk (void);
extern void Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958_AdjustorThunk (void);
extern void Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403_AdjustorThunk (void);
extern void Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF_AdjustorThunk (void);
extern void YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA_AdjustorThunk (void);
extern void YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC_AdjustorThunk (void);
extern void SSH_IntVector2__ctor_m6DCAB9DF4EFE06D52F266D0F7F414EE1EB4AED87_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[68] = 
{
	{ 0x0600007D, YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86_AdjustorThunk },
	{ 0x0600007E, YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1_AdjustorThunk },
	{ 0x0600007F, YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26_AdjustorThunk },
	{ 0x06000080, YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228_AdjustorThunk },
	{ 0x06000081, YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D_AdjustorThunk },
	{ 0x06000082, YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88_AdjustorThunk },
	{ 0x06000083, YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D_AdjustorThunk },
	{ 0x06000084, YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2_AdjustorThunk },
	{ 0x06000085, YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2_AdjustorThunk },
	{ 0x060000BB, YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872_AdjustorThunk },
	{ 0x060000BC, YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10_AdjustorThunk },
	{ 0x060000BD, YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB_AdjustorThunk },
	{ 0x060000BE, YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91_AdjustorThunk },
	{ 0x060000BF, YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA_AdjustorThunk },
	{ 0x060000C0, YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806_AdjustorThunk },
	{ 0x060000C1, YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B_AdjustorThunk },
	{ 0x060000C2, YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5_AdjustorThunk },
	{ 0x060000C3, YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204_AdjustorThunk },
	{ 0x060000C4, YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97_AdjustorThunk },
	{ 0x060000C5, YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03_AdjustorThunk },
	{ 0x060000C6, YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7_AdjustorThunk },
	{ 0x060000C7, YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92_AdjustorThunk },
	{ 0x060000C8, YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B_AdjustorThunk },
	{ 0x060000C9, YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE_AdjustorThunk },
	{ 0x060000CA, YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5_AdjustorThunk },
	{ 0x060000CB, YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1_AdjustorThunk },
	{ 0x060000CC, YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4_AdjustorThunk },
	{ 0x060000CD, YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70_AdjustorThunk },
	{ 0x060000CE, YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840_AdjustorThunk },
	{ 0x060000CF, YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B_AdjustorThunk },
	{ 0x060000D0, YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72_AdjustorThunk },
	{ 0x060000D1, YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA_AdjustorThunk },
	{ 0x060000D2, YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235_AdjustorThunk },
	{ 0x060000D3, YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1_AdjustorThunk },
	{ 0x060000D4, YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E_AdjustorThunk },
	{ 0x060000D5, YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC_AdjustorThunk },
	{ 0x060000D6, Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA_AdjustorThunk },
	{ 0x060000D7, Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958_AdjustorThunk },
	{ 0x060000D8, Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403_AdjustorThunk },
	{ 0x060000D9, Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17_AdjustorThunk },
	{ 0x060000DA, YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82_AdjustorThunk },
	{ 0x060000DB, YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716_AdjustorThunk },
	{ 0x060000DC, YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189_AdjustorThunk },
	{ 0x060000DD, YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53_AdjustorThunk },
	{ 0x060000DE, YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF_AdjustorThunk },
	{ 0x06000125, YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA_AdjustorThunk },
	{ 0x06000126, YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0_AdjustorThunk },
	{ 0x06000127, YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030_AdjustorThunk },
	{ 0x06000128, YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4_AdjustorThunk },
	{ 0x06000129, YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED_AdjustorThunk },
	{ 0x0600012A, YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351_AdjustorThunk },
	{ 0x0600012B, YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA_AdjustorThunk },
	{ 0x0600012C, YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0_AdjustorThunk },
	{ 0x0600012D, YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB_AdjustorThunk },
	{ 0x0600012E, YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C_AdjustorThunk },
	{ 0x0600012F, YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246_AdjustorThunk },
	{ 0x06000130, YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727_AdjustorThunk },
	{ 0x06000131, YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101_AdjustorThunk },
	{ 0x06000132, YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092_AdjustorThunk },
	{ 0x06000133, YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E_AdjustorThunk },
	{ 0x06000134, YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF_AdjustorThunk },
	{ 0x06000135, YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA_AdjustorThunk },
	{ 0x06000136, YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447_AdjustorThunk },
	{ 0x06000137, YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2_AdjustorThunk },
	{ 0x06000138, YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1_AdjustorThunk },
	{ 0x06000139, YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7_AdjustorThunk },
	{ 0x0600013A, YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC_AdjustorThunk },
	{ 0x060002D1, SSH_IntVector2__ctor_m6DCAB9DF4EFE06D52F266D0F7F414EE1EB4AED87_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1339] = 
{
	7683,
	4976,
	4976,
	4976,
	4976,
	4000,
	4976,
	6543,
	4976,
	7715,
	4082,
	4082,
	4714,
	3923,
	4176,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4176,
	4976,
	2467,
	4176,
	1235,
	4082,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7683,
	7683,
	7683,
	7683,
	7400,
	7400,
	7400,
	7400,
	4976,
	4275,
	4273,
	4275,
	2550,
	1484,
	4987,
	4976,
	4082,
	4272,
	4272,
	4987,
	4082,
	4274,
	4275,
	4987,
	4976,
	4276,
	4987,
	4976,
	4272,
	4987,
	4976,
	4082,
	4274,
	4274,
	4987,
	4082,
	4276,
	4276,
	4987,
	4876,
	3682,
	3670,
	4976,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	974,
	7400,
	7400,
	1430,
	1430,
	3670,
	4176,
	4976,
	4976,
	4082,
	2470,
	2470,
	2470,
	1430,
	1430,
	1430,
	2470,
	2470,
	4082,
	4082,
	2470,
	4000,
	3926,
	4852,
	4876,
	4082,
	4082,
	4179,
	4000,
	4976,
	4082,
	4082,
	2470,
	4082,
	4082,
	4976,
	7415,
	7423,
	7400,
	7417,
	7400,
	7379,
	7368,
	7400,
	7416,
	7400,
	7400,
	7400,
	7683,
	7400,
	4082,
	4082,
	4082,
	7133,
	4082,
	4876,
	4082,
	4876,
	4082,
	4717,
	3926,
	4710,
	3920,
	4706,
	3916,
	4706,
	3916,
	4706,
	3916,
	4706,
	3916,
	4715,
	3924,
	4706,
	3916,
	4706,
	3916,
	4876,
	4082,
	4706,
	3916,
	4819,
	4027,
	4819,
	4027,
	4082,
	4876,
	4082,
	4876,
	4082,
	4176,
	4976,
	4976,
	4082,
	2470,
	2470,
	2470,
	1430,
	1430,
	1430,
	2470,
	2470,
	4082,
	4082,
	2470,
	4000,
	3926,
	4876,
	4852,
	4082,
	4082,
	4179,
	4000,
	4976,
	4082,
	4082,
	4082,
	2470,
	4082,
	4976,
	4976,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	7400,
	6869,
	4876,
	4976,
	3024,
	7715,
	4976,
	3024,
	3024,
	3652,
	3670,
	4976,
	3024,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4710,
	3920,
	4710,
	3920,
	7400,
	6869,
	4876,
	4976,
	2108,
	2105,
	4709,
	3919,
	4708,
	3918,
	4876,
	4082,
	4710,
	3920,
	4876,
	4082,
	4716,
	3925,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4976,
	4976,
	4082,
	4976,
	4976,
	4976,
	4976,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4082,
	4976,
	4082,
	4082,
	4082,
	4082,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4082,
	4976,
	4082,
	4976,
	4082,
	4976,
	4082,
	4976,
	4060,
	4976,
	4976,
	4082,
	4976,
	4082,
	4082,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4082,
	4976,
	4976,
	4000,
	4976,
	4976,
	4976,
	4976,
	4082,
	4976,
	1966,
	4976,
	4082,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4082,
	4082,
	4082,
	4976,
	4976,
	4976,
	4082,
	1966,
	4082,
	4976,
	4082,
	4976,
	4976,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4082,
	4976,
	4976,
	4082,
	4082,
	4976,
	3670,
	4976,
	4082,
	4976,
	4082,
	4976,
	4082,
	4976,
	4082,
	4976,
	4082,
	4976,
	4976,
	4082,
	4976,
	4976,
	4976,
	4976,
	4916,
	4876,
	4976,
	4976,
	4976,
	4976,
	0,
	0,
	4976,
	4976,
	7715,
	7715,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	7715,
	2275,
	4976,
	4976,
	4976,
	4976,
	4976,
	2275,
	1770,
	3670,
	4082,
	4976,
	7715,
	4060,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	7683,
	7582,
	4976,
	4082,
	1532,
	4976,
	4876,
	7683,
	7582,
	4976,
	4976,
	4976,
	4976,
	4082,
	4082,
	7683,
	7582,
	4916,
	4916,
	4116,
	4976,
	2504,
	4116,
	4976,
	4976,
	4976,
	4976,
	4876,
	4976,
	3681,
	4976,
	7715,
	4976,
	4162,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4162,
	4162,
	1977,
	4082,
	4976,
	7715,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4916,
	7683,
	7582,
	4976,
	4976,
	4976,
	4976,
	4916,
	4976,
	4976,
	4082,
	4976,
	4976,
	4976,
	4976,
	4976,
	1976,
	4976,
	2507,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4060,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4060,
	3672,
	4976,
	7715,
	2275,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4162,
	4976,
	4976,
	2538,
	4976,
	4876,
	3681,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4976,
	7715,
	4976,
	4082,
	4082,
	4976,
	4976,
	4976,
	4082,
	4976,
	7715,
	7683,
	7582,
	4976,
	7397,
	3667,
	4976,
	7715,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	971,
	3670,
	4976,
	4082,
	4082,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	7683,
	7582,
	4852,
	4852,
	4852,
	4852,
	4852,
	4976,
	4976,
	2275,
	4060,
	4976,
	7715,
	4976,
	4976,
	2275,
	3667,
	3667,
	4976,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	7683,
	7582,
	4852,
	4876,
	4876,
	4876,
	4976,
	4976,
	4976,
	4976,
	4082,
	1371,
	1963,
	4976,
	7715,
	7715,
	4976,
	3479,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	7683,
	7582,
	4976,
	4082,
	1190,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4082,
	4976,
	4082,
	4976,
	7715,
	4082,
	4976,
	4082,
	4976,
	4976,
	4976,
	4976,
	2275,
	4976,
	2275,
	4876,
	4876,
	1590,
	3479,
	4976,
	7582,
	7582,
	7582,
	4976,
	7715,
	4082,
	2470,
	7400,
	7683,
	4976,
	5910,
	6869,
	7069,
	6869,
	5910,
	6545,
	6853,
	4976,
	4976,
	4976,
	6534,
	6534,
	6045,
	7582,
	7582,
	6182,
	4976,
	2275,
	4852,
	4852,
	7683,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	3479,
	4797,
	4000,
	4876,
	2317,
	1950,
	4976,
	3670,
	4976,
	4976,
	2467,
	4976,
	1966,
	4082,
	2467,
	4082,
	1192,
	4082,
	2467,
	4976,
	1966,
	4082,
	7715,
	4976,
	4976,
	3734,
	3479,
	4976,
	4976,
	4082,
	4976,
	4976,
	4060,
	4976,
	4797,
	4976,
	4876,
	4976,
	4876,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	7676,
	7676,
	7676,
	7676,
	7683,
	7582,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4966,
	4160,
	4916,
	4852,
	4876,
	4876,
	4876,
	4876,
	4976,
	3024,
	2454,
	4797,
	4082,
	4976,
	4976,
	7715,
	7582,
	4976,
	4976,
	7715,
	0,
	4797,
	4797,
	4082,
	4082,
	4976,
	4976,
	4976,
	4976,
	4976,
	4060,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4712,
	4976,
	4797,
	4976,
	4976,
	4976,
	4082,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4797,
	4976,
	2294,
	4976,
	4976,
	4976,
	4000,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	4060,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	4976,
	2294,
	4976,
	1271,
	4976,
	1271,
	4976,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4976,
	4976,
	4082,
	4082,
	2519,
	2519,
	1408,
	1408,
	1427,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4976,
	3670,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4082,
	3670,
	3670,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4876,
	4876,
	4976,
	7715,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4060,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4060,
	4976,
	4976,
	4976,
	2519,
	2519,
	1408,
	1408,
	1427,
	4976,
	4976,
	4976,
	4976,
	4082,
	4082,
	4976,
	4976,
	4976,
	4976,
	4082,
	4976,
	4082,
	4082,
	4082,
	4082,
	4060,
	4976,
	4976,
	4976,
	4976,
	4060,
	4976,
	4976,
	4976,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4082,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4082,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4082,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4976,
	4082,
	4876,
	4976,
	4976,
	1770,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	3670,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4876,
	4976,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4060,
	4976,
	4976,
	4976,
	4976,
	4082,
	3672,
	4976,
	7715,
	4976,
	4082,
	4082,
	4060,
	4976,
	4797,
	4876,
	4976,
	4876,
	4976,
	4976,
	4976,
	4876,
	4968,
	4976,
	4976,
	4976,
	4876,
	4976,
	4976,
	4976,
	0,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4976,
	4852,
	4060,
	4876,
	4082,
	4876,
	4082,
	4876,
	4082,
	4797,
	4000,
	4852,
	4819,
	4027,
	4916,
	4116,
	4964,
	4158,
	4853,
	4061,
	4963,
	4157,
	4852,
	4060,
	4962,
	4156,
	4851,
	4059,
	4797,
	4000,
	4911,
	4111,
	4797,
	4000,
	4797,
	4000,
	4852,
	4060,
	4852,
	4060,
	3670,
	3667,
	7400,
	7208,
	7271,
	7478,
	7546,
	7333,
	7534,
	7315,
	7520,
	7294,
	7208,
	7461,
	7400,
	7386,
	7683,
	5185,
	7400,
	7400,
	4082,
	4000,
	4976,
	152,
	4082,
	4082,
	2092,
	241,
	3024,
	4852,
	6675,
	7400,
	4976,
	4082,
	4976,
	4082,
	4116,
	4027,
	4061,
	4158,
	4000,
	4082,
	4082,
	7715,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x060001B6, { 0, 1 } },
	{ 0x060001B7, { 1, 1 } },
};
extern const uint32_t g_rgctx_T_t9B9E7CA65EF42D6AD9E9C2F893AEDD89547DF34C;
extern const uint32_t g_rgctx_T_t2CB78E70AE3C56D293311F7EED319D9EB103E482;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9B9E7CA65EF42D6AD9E9C2F893AEDD89547DF34C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2CB78E70AE3C56D293311F7EED319D9EB103E482 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule = 
{
	"Assembly-CSharp.dll",
	1339,
	s_methodPointers,
	68,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
