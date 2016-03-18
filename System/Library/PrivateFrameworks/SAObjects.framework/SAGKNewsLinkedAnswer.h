/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSDate, NSString;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsLinkedAnswer;
+(id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)publicationDate;
-(void)setPublicationDate:(NSDate *)arg1 ;
@end

