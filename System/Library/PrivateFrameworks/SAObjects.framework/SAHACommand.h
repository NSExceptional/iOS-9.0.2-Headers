/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAHAFilter;

@interface SAHACommand : SADomainCommand

@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,retain) SAHAFilter * filter; 
+(id)command;
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(SAHAFilter *)filter;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

