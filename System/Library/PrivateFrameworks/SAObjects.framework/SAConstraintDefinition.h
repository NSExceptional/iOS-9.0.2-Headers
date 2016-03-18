/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAConstraintDefinition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * supportedValues; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constraintDefinition;
+(id)constraintDefinitionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)supportedValues;
-(void)setSupportedValues:(NSArray *)arg1 ;
@end

