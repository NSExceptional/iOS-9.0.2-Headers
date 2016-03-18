/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, SAUITemplateRange, NSString;

@interface SAUITemplateAttributedStringAttributeRun : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * attributes; 
@property (nonatomic,retain) SAUITemplateRange * range; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringAttributeRun;
+(id)attributedStringAttributeRunWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUITemplateRange *)range;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setRange:(SAUITemplateRange *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
