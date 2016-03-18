/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXWebThreadPreparer : NSObject {

	BOOL _preparedThisRunLoop;
	BOOL _preparedAnswer;

}

@property (assign,nonatomic) BOOL preparedThisRunLoop;              //@synthesize preparedThisRunLoop=_preparedThisRunLoop - In the implementation block
@property (assign,nonatomic) BOOL preparedAnswer;                   //@synthesize preparedAnswer=_preparedAnswer - In the implementation block
+(id)sharedPreparer;
-(BOOL)preparedThisRunLoop;
-(void)setPreparedThisRunLoop:(BOOL)arg1 ;
-(BOOL)preparedAnswer;
-(void)setPreparedAnswer:(BOOL)arg1 ;
-(id)init;
@end

