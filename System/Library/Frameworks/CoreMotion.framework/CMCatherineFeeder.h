/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject {

	CMCatherineFeederInternal* _internal;

}

@property (nonatomic,readonly) CMCatherineFeederInternal * internal;              //@synthesize internal=_internal - In the implementation block
-(void)feedCatherine:(double)arg1 confidence:(double)arg2 ;
-(void)dealloc;
-(id)init;
-(CMCatherineFeederInternal *)internal;
@end
