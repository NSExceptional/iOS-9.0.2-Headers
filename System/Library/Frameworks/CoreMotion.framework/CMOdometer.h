/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMOdometerDelegate;
@class CMOdometerProxy;

@interface CMOdometer : NSObject {

	id<CMOdometerDelegate> _delegate;
	CMOdometerProxy* _odometerProxy;

}

@property (assign,nonatomic) id<CMOdometerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CMOdometerProxy * odometerProxy;              //@synthesize odometerProxy=_odometerProxy - In the implementation block
-(CMOdometerProxy *)odometerProxy;
-(void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopOdometerUpdates;
-(void)setDelegate:(id<CMOdometerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CMOdometerDelegate>)delegate;
@end
