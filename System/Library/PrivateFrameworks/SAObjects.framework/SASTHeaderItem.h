/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTHeaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * header; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerItem;
+(id)headerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setHeader:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)header;
@end
