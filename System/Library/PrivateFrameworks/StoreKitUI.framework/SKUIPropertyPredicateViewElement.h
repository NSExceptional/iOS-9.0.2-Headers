/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPredicateViewElement.h>

@class NSString;

@interface SKUIPropertyPredicateViewElement : SKUIPredicateViewElement {

	long long _comparisonType;
	NSString* _property;
	NSString* _value;

}

@property (nonatomic,readonly) long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                 //@synthesize value=_value - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(NSString *)value;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)entityValuePredicate;
-(long long)comparisonType;
-(NSString *)property;
@end
