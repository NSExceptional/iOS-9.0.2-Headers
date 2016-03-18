/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSUserAddress : ICSProperty

@property (assign,nonatomic) BOOL rsvp; 
@property (nonatomic,retain) NSString * cn; 
@property (assign,nonatomic) int cutype; 
@property (nonatomic,retain) NSString * dir; 
@property (assign,nonatomic) int partstat; 
@property (assign,nonatomic) int schedulestatus; 
@property (assign,nonatomic) int scheduleagent; 
@property (assign,nonatomic) int scheduleforcesend; 
@property (assign,nonatomic) int role; 
@property (nonatomic,retain) ICSDateValue * partstatModified; 
@property (assign,nonatomic) BOOL x_apple_self_invited; 
@property (nonatomic,retain) NSString * email; 
+(id)URLForNoMail;
+(int)roleFromICSString:(id)arg1 ;
+(int)calendarUserFromICSString:(id)arg1 ;
+(int)participationStatusFromICSString:(id)arg1 ;
+(int)scheduleStatusFromICSString:(id)arg1 ;
+(int)scheduleAgentFromICSString:(id)arg1 ;
+(int)scheduleForceSendFromICSString:(id)arg1 ;
+(id)ICSStringFromCalendarUser:(int)arg1 ;
+(id)ICSStringFromParticipationStatus:(int)arg1 ;
+(id)ICSStringFromScheduleAgent:(int)arg1 ;
+(id)ICSStringFromScheduleStatus:(int)arg1 ;
+(id)ICSStringFromScheduleForceSend:(int)arg1 ;
+(id)ICSStringFromRole:(int)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)fixAddress;
-(id)initWithURL:(id)arg1 ;
-(id)displayName;
-(NSString *)cn;
-(int)cutype;
-(int)scheduleagent;
-(ICSDateValue *)partstatModified;
-(void)setPartstatModified:(ICSDateValue *)arg1 ;
-(BOOL)hasEmailAddress;
-(int)partstat;
-(BOOL)rsvp;
-(void)setScheduleagent:(int)arg1 ;
-(void)setRsvp:(BOOL)arg1 ;
-(void)setCn:(NSString *)arg1 ;
-(void)setCutype:(int)arg1 ;
-(void)setPartstat:(int)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(id)emailAddress;
-(void)setDir:(NSString *)arg1 ;
-(NSString *)dir;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(BOOL)isEmailAddress;
-(BOOL)isHTTPAddress;
-(BOOL)isHTTPSAddress;
-(void)setSchedulestatus:(int)arg1 ;
-(int)schedulestatus;
-(void)setScheduleforcesend:(int)arg1 ;
-(int)scheduleforcesend;
-(void)setX_apple_self_invited:(BOOL)arg1 ;
-(BOOL)x_apple_self_invited;
-(void)setX_calendarserver_email:(id)arg1 ;
-(id)x_calendarserver_email;
-(void)setRole:(int)arg1 ;
-(int)role;
@end

