/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification {

	NSArray* _updatedKeys;

}

@property (nonatomic,retain) NSArray * updatedKeys;              //@synthesize updatedKeys=_updatedKeys - In the implementation block
+(id)notificationName;
-(id)initWithUpdatedKeys:(id)arg1 ;
-(NSArray *)updatedKeys;
-(void)setUpdatedKeys:(NSArray *)arg1 ;
@end

