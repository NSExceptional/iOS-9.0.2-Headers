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

@class CKDPComment;

@interface CKDPGetCommentResponse : PBCodable <NSCopying> {

	CKDPComment* _comment;

}

@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) CKDPComment * comment;              //@synthesize comment=_comment - In the implementation block
-(void)setComment:(CKDPComment *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasComment;
-(CKDPComment *)comment;
-(BOOL)readFrom:(id)arg1 ;
@end

