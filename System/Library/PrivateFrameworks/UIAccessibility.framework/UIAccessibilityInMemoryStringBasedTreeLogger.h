/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAccessibilityElementTraversalTreeLogger.h>

@class NSMutableString, NSMutableArray, NSString;

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger> {

	NSMutableString* _stringRepresentation;
	NSMutableArray* _currentPrefix;
	NSString* _prefix;
	NSString* _descriptionKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)pop;
-(void)logElement:(id)arg1 ;
-(void)push;
-(id)initWithPrefix:(id)arg1 ;
-(id)initWithPrefix:(id)arg1 elementDescriptionKey:(id)arg2 ;
-(id)initWithElementDescriptionKey:(id)arg1 ;
-(id)stringRepresentation;
@end

