/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFPageLoadErrorControllerDelegate <NSObject>
@optional
-(void)pageLoadErrorController:(id)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(id)arg2;
-(id)pageLoadErrorControllerApplicationDisplayName:(id)arg1;

@required
-(void)pageLoadErrorControllerDidShowAlert:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
-(void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(id)arg1 action:(int)arg2;
-(void)pageLoadErrorControllerDidShowErrorPage:(id)arg1;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;

@end

