/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableArray;

@interface ABPersonTableActionDataSource : NSObject {

	NSMutableArray* _topActions;
	NSMutableArray* _bottomActions;
	CFDictionaryRef _actionsByProperty;
	CFDictionaryRef _actionGroupingsByProperty;
	CFDictionaryRef _inlineActionsByProperty;
	CFSetRef _hiddenActions;

}
-(BOOL)isActionHidden:(id)arg1 ;
-(void)setAction:(id)arg1 hidden:(BOOL)arg2 ;
-(BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 outActions:(id*)arg6 outIndex:(long long*)arg7 ;
-(id)topActions;
-(id)bottomActions;
-(CFDictionaryRef)inlineActionsByProperty;
-(CFDictionaryRef)actionsByProperty;
-(CFDictionaryRef)actionGroupingsByProperty;
-(id)actionsForProperty:(int)arg1 withActionGrouping:(long long)arg2 ;
-(BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 matchProperty:(BOOL)arg3 property:(int)arg4 inArray:(id)arg5 outActions:(id*)arg6 outIndex:(long long*)arg7 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5 ;
-(CFArrayRef)groupingsForProperty:(int)arg1 ;
-(id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(long long)arg8 ordering:(long long)arg9 ;
-(void)removeAction:(id)arg1 ;
-(id)newActionsForProperty:(int)arg1 ;
-(long long)groupingCountForProperty:(int)arg1 ;
-(long long)actionCountForProperty:(int)arg1 withActionGrouping:(long long)arg2 ;
-(id)actionForProperty:(int)arg1 withActionGrouping:(long long)arg2 atIndex:(long long)arg3 ;
-(id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(long long)arg2 ;
-(long long)actionCountForActionGrouping:(long long)arg1 ;
-(CFArrayRef)indexesOfActionsForProperty:(int)arg1 withActionGrouping:(long long)arg2 ;
-(id)actionWithActionGrouping:(long long)arg1 atIndex:(long long)arg2 ;
-(void)dealloc;
@end

