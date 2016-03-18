/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (assign,nonatomic) unsigned long long shareeAccessLevel; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)shareeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(NSString *)externalID;
-(unsigned long long)shareeStatus;
-(unsigned long long)shareeAccessLevel;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(void)setShareeAccessLevel:(unsigned long long)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(NSString *)displayName;
-(int)entityType;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

