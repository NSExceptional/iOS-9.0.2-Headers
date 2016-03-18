/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIItemListTableDelegate <NSObject>
@optional
-(BOOL)itemList:(id)arg1 canRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemListWillBeginDragging:(id)arg1;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
-(id)itemList:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;

@end

