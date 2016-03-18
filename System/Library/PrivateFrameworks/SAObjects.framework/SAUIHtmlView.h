/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * html; 
+(id)htmlView;
+(id)htmlViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
@end

