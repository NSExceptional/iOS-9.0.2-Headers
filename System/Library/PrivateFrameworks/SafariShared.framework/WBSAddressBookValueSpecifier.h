/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject {

	NSString* _property;
	NSString* _component;
	NSString* _label;
	NSString* _category;
	NSString* _parentProperty;

}

@property (nonatomic,readonly) NSString * property;                    //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSString * component;                   //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * category;                    //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * parentProperty;              //@synthesize parentProperty=_parentProperty - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)category;
-(NSString *)label;
-(NSString *)component;
-(id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 category:(id)arg4 parentProperty:(id)arg5 ;
-(id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 ;
-(NSString *)parentProperty;
-(NSString *)property;
@end

