/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (nonatomic,retain,readonly) PLChangeNotificationCenter * changeNotificationCenter; 
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(PLChangeNotificationCenter *)changeNotificationCenter;
-(void)_calculateDiffs;
@end

