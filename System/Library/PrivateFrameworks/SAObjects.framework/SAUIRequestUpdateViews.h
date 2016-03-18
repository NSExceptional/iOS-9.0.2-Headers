/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timeInSeconds; 
@property (nonatomic,copy) NSArray * viewIds; 
+(id)requestUpdateViews;
+(id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)timeInSeconds;
-(void)setTimeInSeconds:(NSNumber *)arg1 ;
-(NSArray *)viewIds;
-(void)setViewIds:(NSArray *)arg1 ;
@end

