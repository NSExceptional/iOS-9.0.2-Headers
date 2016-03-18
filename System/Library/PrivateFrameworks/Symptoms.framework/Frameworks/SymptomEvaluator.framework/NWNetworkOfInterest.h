/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDate, NSArray, NSPredicate;

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying> {

	BOOL isThinnedOut;
	NSMutableArray* allInvitesHourly;
	NSMutableArray* bgInvitesHourly;
	int lastHour;
	BOOL _isTrafficEligible;
	BOOL _willGetDiscretionaryTrafficInvites;
	BOOL _discretionaryTrafficInvited;
	BOOL _isAny;
	BOOL _isBuiltin;
	long long _considerAlternate;
	NSDate* _predictionsGeneratedAt;
	NSArray* _predictions;
	long long _interface;
	NSPredicate* _customSignature;
	long long _version;
	long long _scopedToLOI;
	long long _flags;

}

@property (readonly) long long interface;                                //@synthesize interface=_interface - In the implementation block
@property (readonly) BOOL isAny;                                         //@synthesize isAny=_isAny - In the implementation block
@property (readonly) BOOL isBuiltin;                                     //@synthesize isBuiltin=_isBuiltin - In the implementation block
@property (readonly) NSPredicate * customSignature;                      //@synthesize customSignature=_customSignature - In the implementation block
@property (assign) BOOL isTrafficEligible;                               //@synthesize isTrafficEligible=_isTrafficEligible - In the implementation block
@property (assign) BOOL willGetDiscretionaryTrafficInvites;              //@synthesize willGetDiscretionaryTrafficInvites=_willGetDiscretionaryTrafficInvites - In the implementation block
@property (assign) BOOL discretionaryTrafficInvited;                     //@synthesize discretionaryTrafficInvited=_discretionaryTrafficInvited - In the implementation block
@property (assign) long long considerAlternate;                          //@synthesize considerAlternate=_considerAlternate - In the implementation block
@property (retain) NSDate * predictionsGeneratedAt;                      //@synthesize predictionsGeneratedAt=_predictionsGeneratedAt - In the implementation block
@property (retain) NSArray * predictions;                                //@synthesize predictions=_predictions - In the implementation block
@property (readonly) long long version;                                  //@synthesize version=_version - In the implementation block
@property (readonly) long long scopedToLOI;                              //@synthesize scopedToLOI=_scopedToLOI - In the implementation block
@property (readonly) long long flags;                                    //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)version;
-(long long)interface;
-(NSArray *)predictions;
-(NSPredicate *)customSignature;
-(long long)flags;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)identityAttrsOnly;
-(void)removeObserverForAllKeyPaths:(id)arg1 ;
-(void)addObserverForAllKeyPaths:(id)arg1 ;
-(BOOL)isAny;
-(BOOL)isTrafficEligible;
-(void)setIsTrafficEligible:(BOOL)arg1 ;
-(BOOL)isBuiltin;
-(long long)scopedToLOI;
-(void)setWillGetDiscretionaryTrafficInvites:(BOOL)arg1 ;
-(BOOL)willGetDiscretionaryTrafficInvites;
-(void)setDiscretionaryTrafficInvited:(BOOL)arg1 ;
-(id)hasForegroundActivity;
-(void)setConsiderAlternate:(long long)arg1 ;
-(void)setPredictionsGeneratedAt:(NSDate *)arg1 ;
-(id)initWithSpec:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 flags:(long long)arg5 hasCustomSignature:(id)arg6 ;
-(BOOL)discretionaryTrafficInvited;
-(long long)considerAlternate;
-(NSDate *)predictionsGeneratedAt;
-(BOOL)_isEqualToNOI:(id)arg1 ;
-(BOOL)_newDistroSlot;
-(BOOL)atHomeScopedNOI;
-(BOOL)atWorkScopedNOI;
-(void)setPredictions:(NSArray *)arg1 ;
-(id)instantQuality;
-(void)setInstantQuality:(id)arg1 ;
-(void)setHasForegroundActivity:(id)arg1 ;
-(id)predictionsError;
-(id)dayOfWeekGrouping;
-(id)trainingProgress;
-(id)invitesHourlyDistribution;
@end

