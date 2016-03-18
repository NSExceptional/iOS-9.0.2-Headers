/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKShareID;

@interface CKDShortTokenInfo : NSObject <NSCopying> {

	NSString* _routingKey;
	NSData* _shortSharingTokenHashData;
	CKShareID* _shareID;

}

@property (nonatomic,retain) NSString * routingKey;                           //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenHashData;              //@synthesize shortSharingTokenHashData=_shortSharingTokenHashData - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                             //@synthesize shareID=_shareID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKShareID *)shareID;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(void)setShortSharingTokenHashData:(NSData *)arg1 ;
-(void)setShareID:(CKShareID *)arg1 ;
@end
