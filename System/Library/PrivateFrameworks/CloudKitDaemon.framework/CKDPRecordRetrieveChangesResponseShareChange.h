/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPShare, CKDPShareIdentifier;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying> {

	int _changeType;
	CKDPShare* _share;
	CKDPShareIdentifier* _shareIdentifier;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasShareIdentifier; 
@property (nonatomic,retain) CKDPShareIdentifier * shareIdentifier;              //@synthesize shareIdentifier=_shareIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                                     //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;                                  //@synthesize share=_share - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShare:(CKDPShare *)arg1 ;
-(BOOL)hasShare;
-(CKDPShare *)share;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareIdentifier;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(CKDPShareIdentifier *)shareIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
@end

