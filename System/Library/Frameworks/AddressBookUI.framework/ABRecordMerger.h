/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@interface ABRecordMerger : NSObject
+(void)_addValue:(void*)arg1 withProperty:(int)arg2 toExistingValues:(CFSetRef)arg3 ;
+(BOOL)_addMultiValueEntry:(void*)arg1 atIndex:(long long)arg2 toMultiValue:(void*)arg3 withProperty:(int)arg4 existingValues:(CFSetRef)arg5 ;
+(BOOL)_propertiesArray:(id)arg1 containsProperty:(int)arg2 ;
+(BOOL)mergeMultiValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3 ;
+(BOOL)_mergeSingleValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3 ;
+(void)mergeVCardRecord:(void*)arg1 withProperties:(CFArrayRef)arg2 intoRecord:(void*)arg3 ;
@end

