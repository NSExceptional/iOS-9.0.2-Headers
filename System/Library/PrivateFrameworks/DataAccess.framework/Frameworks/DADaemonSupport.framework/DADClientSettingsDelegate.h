/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DASettingsResponseDelegate.h>

@class DAOofParams;

@interface DADClientSettingsDelegate : DADClientDelegate <DASettingsResponseDelegate> {

	BOOL _isUpdate;
	DAOofParams* _requestParams;
	DAOofParams* _responseParams;

}

@property (assign,nonatomic) BOOL isUpdate;                             //@synthesize isUpdate=_isUpdate - In the implementation block
@property (nonatomic,retain) DAOofParams * requestParams;               //@synthesize requestParams=_requestParams - In the implementation block
@property (nonatomic,retain) DAOofParams * responseParams;              //@synthesize responseParams=_responseParams - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)dealloc;
-(void)settingsRequestFinishedWithResults:(id)arg1 status:(long long)arg2 error:(id)arg3 ;
-(BOOL)isUpdate;
-(id)initWithAccountID:(id)arg1 requestDictionary:(id)arg2 forUpdate:(BOOL)arg3 client:(id)arg4 ;
-(void)beginSettingsRequest;
-(BOOL)isOofSupported;
-(void)setResponseParams:(DAOofParams *)arg1 ;
-(DAOofParams *)responseParams;
-(DAOofParams *)requestParams;
-(void)setRequestParams:(DAOofParams *)arg1 ;
-(void)disable;
@end
