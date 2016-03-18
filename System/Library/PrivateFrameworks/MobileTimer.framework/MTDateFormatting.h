/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDateFormatter;

@interface MTDateFormatting : NSObject {

	NSString* _amString;
	NSString* _pmString;
	NSDateFormatter* _dateOnlyFormatter;
	NSDateFormatter* _timeOnlyFormatter;
	BOOL _use24HourTime;
	BOOL _timeDesignatorAppearsBeforeTime;

}

@property (nonatomic,__weak,readonly) NSString * amString; 
@property (nonatomic,__weak,readonly) NSString * pmString; 
@property (nonatomic,readonly) BOOL use24HourTime;                                //@synthesize use24HourTime=_use24HourTime - In the implementation block
@property (nonatomic,readonly) BOOL timeDesignatorAppearsBeforeTime;              //@synthesize timeDesignatorAppearsBeforeTime=_timeDesignatorAppearsBeforeTime - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(BOOL)use24HourTime;
-(NSString *)amString;
-(NSString *)pmString;
-(void)_reloadLocaleInfo;
-(void)_clearLocaleDependentState;
-(id)_dateOnlyFormatter;
-(id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id*)arg3 ;
-(id)_timeOnlyFormatter;
-(id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2 ;
-(id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id*)arg2 ;
-(id)timeDesignatorForDate:(id)arg1 ;
@end

