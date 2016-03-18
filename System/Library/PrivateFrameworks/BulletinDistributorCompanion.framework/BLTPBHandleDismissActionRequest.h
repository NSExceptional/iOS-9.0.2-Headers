/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBActionInformation, NSString;

@interface BLTPBHandleDismissActionRequest : PBRequest <NSCopying> {

	BLTPBActionInformation* _actionInfo;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;                   //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasActionInfo; 
@property (nonatomic,retain) BLTPBActionInformation * actionInfo;              //@synthesize actionInfo=_actionInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)publisherBulletinID;
-(BOOL)hasPublisherBulletinID;
-(BOOL)hasRecordID;
-(BOOL)hasSectionID;
-(void)setActionInfo:(BLTPBActionInformation *)arg1 ;
-(BOOL)hasActionInfo;
-(BLTPBActionInformation *)actionInfo;
-(NSString *)sectionID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
@end

