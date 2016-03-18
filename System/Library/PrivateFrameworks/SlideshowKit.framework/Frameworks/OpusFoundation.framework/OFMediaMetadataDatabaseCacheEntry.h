/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class OFMediaMetadataDatabaseCache, NSString, NSDate;

@interface OFMediaMetadataDatabaseCacheEntry : NSObject {

	OFMediaMetadataDatabaseCache* _context;
	long long _uniqueID;
	NSString* _identifier;
	NSDate* _creationDate;
	NSString* _name;
	BOOL _isFault;
	BOOL _isDirty;

}

@property (assign) long long uniqueID;                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain) OFMediaMetadataDatabaseCache * context;              //@synthesize context=_context - In the implementation block
@property (copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign) BOOL isFault;                                        //@synthesize isFault=_isFault - In the implementation block
@property (assign) BOOL isDirty;                                        //@synthesize isDirty=_isDirty - In the implementation block
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)save;
-(BOOL)isFault;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(OFMediaMetadataDatabaseCache *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)update;
-(void)setContext:(OFMediaMetadataDatabaseCache *)arg1 ;
-(void)cleanup;
-(long long)uniqueID;
-(BOOL)isDirty;
-(id)initWithContext:(id)arg1 andStatement:(sqlite3_stmtRef)arg2 ;
-(void)updateWithStatement:(sqlite3_stmtRef)arg1 ;
-(void)setIsFault:(BOOL)arg1 ;
-(void)setIsDirty:(BOOL)arg1 ;
-(void)setUniqueID:(long long)arg1 ;
@end

