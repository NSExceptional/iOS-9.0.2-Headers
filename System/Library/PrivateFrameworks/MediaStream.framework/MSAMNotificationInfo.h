/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject {

	MSAlertManager* _owner;
	NSString* _personID;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _runLoopSource;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) MSAlertManager * owner;                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * personID;                                 //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource; 
@property (assign,nonatomic) CFUserNotificationRef userNotification; 
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)info;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CFUserNotificationRef)userNotification;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setOwner:(MSAlertManager *)arg1 ;
-(MSAlertManager *)owner;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
@end

