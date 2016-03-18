/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRSpecializedQueueInfoProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _specializedQueues;

}

@property (nonatomic,retain) NSMutableArray * specializedQueues;              //@synthesize specializedQueues=_specializedQueues - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSpecializedQueues:(id)arg1 ;
-(NSMutableArray *)specializedQueues;
-(unsigned long long)specializedQueuesCount;
-(void)clearSpecializedQueues;
-(id)specializedQueuesAtIndex:(unsigned long long)arg1 ;
-(void)setSpecializedQueues:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

