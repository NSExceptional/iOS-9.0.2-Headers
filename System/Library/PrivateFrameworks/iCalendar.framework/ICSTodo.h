/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL, ICSStructuredLocation, NSData;

@interface ICSTodo : ICSComponent

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (nonatomic,retain) ICSDate * completed; 
@property (assign,nonatomic) long long percentComplete; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (nonatomic,retain) ICSDate * due; 
@property (retain) ICSDuration * duration; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) NSString * location; 
@property (retain) ICSUserAddress * organizer; 
@property (assign) unsigned long long priority; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * rrule; 
@property (assign) unsigned long long sequence; 
@property (assign) int status; 
@property (retain) NSString * summary; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
@property (retain) NSString * x_apple_ews_changekey; 
@property (retain) NSString * x_apple_ews_itemid; 
@property (assign) BOOL x_apple_ews_needsserverconfirmation; 
@property (retain) NSString * x_apple_ews_permission; 
@property (assign,nonatomic) unsigned long long x_apple_sort_order; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
@property (retain) NSArray * conferences; 
@property (nonatomic,retain) NSArray * x_apple_activity; 
@property (nonatomic,retain) NSData * x_apple_appLinkData; 
+(id)name;
-(void)fixComponent;
-(ICSDate *)completed;
-(long long)percentComplete;
-(void)setCompleted:(ICSDate *)arg1 ;
-(void)setPercentComplete:(long long)arg1 ;
-(NSArray *)x_apple_activity;
-(NSData *)x_apple_appLinkData;
-(unsigned long long)x_apple_sort_order;
-(void)setX_apple_activity:(NSArray *)arg1 ;
-(void)setX_apple_appLinkData:(NSData *)arg1 ;
-(void)setDue:(ICSDate *)arg1 ;
-(void)setX_apple_sort_order:(unsigned long long)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(ICSDate *)due;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
@end

