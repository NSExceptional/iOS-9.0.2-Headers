/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MCSessionPeerConnectionData : NSObject {

	BOOL _hasIdentitySet;
	NSData* _gckSessionConnectionData;
	long long _encryptionPreference;

}

@property (nonatomic,retain) NSData * gckSessionConnectionData;              //@synthesize gckSessionConnectionData=_gckSessionConnectionData - In the implementation block
@property (assign,nonatomic) long long encryptionPreference;                 //@synthesize encryptionPreference=_encryptionPreference - In the implementation block
@property (assign,nonatomic) BOOL hasIdentitySet;                            //@synthesize hasIdentitySet=_hasIdentitySet - In the implementation block
+(id)connectionDataSegmentWithEncryptionPreference:(long long)arg1 identitySet:(BOOL)arg2 gckSessionConnectionDataBytes:(void*)arg3 gckSessionConnectionDataLength:(unsigned long long)arg4 ;
-(BOOL)parseConnectionDataBlob:(id)arg1 ;
-(void)setEncryptionPreference:(long long)arg1 ;
-(void)setHasIdentitySet:(BOOL)arg1 ;
-(void)setGckSessionConnectionData:(NSData *)arg1 ;
-(void)parseConnectionDataSegmentWithBytes:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(id)initWithConnectionDataBlob:(id)arg1 ;
-(NSData *)gckSessionConnectionData;
-(long long)encryptionPreference;
-(BOOL)hasIdentitySet;
-(void)dealloc;
@end

