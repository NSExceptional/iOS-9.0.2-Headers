/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface RTPurgeManager : RTNotifier {

	NSObject*<OS_dispatch_source> _memoryWarningDispatchSource;
	long long _pressureState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningDispatchSource;              //@synthesize memoryWarningDispatchSource=_memoryWarningDispatchSource - In the implementation block
@property (assign,nonatomic) long long pressureState;                                                //@synthesize pressureState=_pressureState - In the implementation block
+(id)sharedInstance;
+(id)purgeIdentifier;
+(double)purgeDelay;
+(double)clearRoutineDelay;
+(double)resetLocationsDelay;
+(id)earliestRawLocationDate;
-(id)init;
-(void)purge;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)clearRoutine;
-(long long)pressureState;
-(void)onAppResetChanged;
-(void)_unregisterForMemoryPressureWarnings;
-(void)_registerForMemoryPressureWarnings;
-(NSObject*<OS_dispatch_source>)memoryWarningDispatchSource;
-(void)setMemoryWarningDispatchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPressureState:(long long)arg1 ;
@end

