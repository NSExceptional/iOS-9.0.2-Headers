/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCommentedOnId, CKDPLikeInfo;

@interface CKDPCommentSummary : PBCodable <NSCopying> {

	CKDPCommentedOnId* _identifier;
	CKDPLikeInfo* _likeInfo;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPCommentedOnId * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;                     //@synthesize likeInfo=_likeInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPCommentedOnId *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPCommentedOnId *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(BOOL)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)readFrom:(id)arg1 ;
@end

