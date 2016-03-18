/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BLTPBFullBulletinList : PBCodable <NSCopying> {

	NSMutableArray* _sectionBulletinLists;

}

@property (nonatomic,retain) NSMutableArray * sectionBulletinLists;              //@synthesize sectionBulletinLists=_sectionBulletinLists - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addSectionBulletinList:(id)arg1 ;
-(unsigned long long)sectionBulletinListsCount;
-(void)clearSectionBulletinLists;
-(id)sectionBulletinListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sectionBulletinLists;
-(void)setSectionBulletinLists:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

