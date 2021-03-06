/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXLiveRegionNode : NSObject {

	NSString* _label;
	NSString* _value;
	unsigned long long _traits;
	id _object;

}

@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long traits;              //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) id object;                              //@synthesize object=_object - In the implementation block
+(id)createNodeFromObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)object;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)traits;
-(void)setObject:(id)arg1 ;
-(void)setTraits:(unsigned long long)arg1 ;
@end

