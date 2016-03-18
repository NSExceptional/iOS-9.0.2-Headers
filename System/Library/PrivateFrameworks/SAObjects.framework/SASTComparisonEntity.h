/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, SAUINanoImageResource, NSString;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIDecoratedText * decoratedTitle; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)comparisonEntity;
+(id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(SAUIDecoratedText *)decoratedTitle;
-(void)setDecoratedTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
@end

