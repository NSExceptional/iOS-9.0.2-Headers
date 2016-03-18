/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface _HKIdentifierLookupTable : NSObject {

	NSMapTable* _identifierMapTable;
	int _lookupTableSpinLock;

}
-(void)_insertCode:(long long)arg1 forIdentifier:(id)arg2 ;
-(void)setCode:(long long)arg1 forIdentifier:(id)arg2 ;
-(BOOL)codeForIdentifier:(id)arg1 code:(long long*)arg2 ;
-(void)enumerateCodesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

