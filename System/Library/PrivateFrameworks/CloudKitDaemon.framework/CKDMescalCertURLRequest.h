/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

@interface CKDMescalCertURLRequest : CKDURLRequest {

	NSData* _mescalCert;

}

@property (nonatomic,retain) NSData * mescalCert;              //@synthesize mescalCert=_mescalCert - In the implementation block
-(id)url;
-(BOOL)requiresDeviceID;
-(BOOL)requiresSignature;
-(BOOL)allowsAnonymousAccount;
-(long long)serverType;
-(long long)partitionType;
-(BOOL)hasRequestBody;
-(NSData *)mescalCert;
-(id)httpMethod;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(void)setMescalCert:(NSData *)arg1 ;
@end
