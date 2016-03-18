/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CardDAVSyncInfo : NSObject {

	NSMutableDictionary* _uuidToPersonCache;
	BOOL _startedWithNoContacts;

}

@property (nonatomic,retain) NSMutableDictionary * uuidToPersonCache;              //@synthesize uuidToPersonCache=_uuidToPersonCache - In the implementation block
@property (assign,nonatomic) BOOL startedWithNoContacts;                           //@synthesize startedWithNoContacts=_startedWithNoContacts - In the implementation block
-(NSMutableDictionary *)uuidToPersonCache;
-(void)setUuidToPersonCache:(NSMutableDictionary *)arg1 ;
-(BOOL)startedWithNoContacts;
-(void)setStartedWithNoContacts:(BOOL)arg1 ;
@end

