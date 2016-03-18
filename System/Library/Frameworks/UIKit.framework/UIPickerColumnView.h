/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIPickerTableView, UIView, UIPickerView, UIColor, NSString;

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {

	UIPickerTableView* _topTable;
	UIPickerTableView* _middleTable;
	UIPickerTableView* _bottomTable;
	UIView* _topContainerView;
	UIView* _middleContainerView;
	UIView* _bottomContainerView;
	double _middleBarHeight;
	double _rowHeight;
	UIPickerView* _pickerView;
	CGRect _tableFrame;
	CATransform3D _perspectiveTransform;
	UIColor* __textColor;
	double _leftHitTestExtension;
	double _rightHitTestExtension;

}

@property (assign,nonatomic) CGRect selectionBarRect; 
@property (nonatomic,readonly) long long selectionBarRow; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * _textColor;              //@synthesize _textColor=__textColor - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) CATransform3D perspectiveTransform;                                        //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (assign,nonatomic) double leftHitTestExtension;                                               //@synthesize leftHitTestExtension=_leftHitTestExtension - In the implementation block
@property (assign,nonatomic) double rightHitTestExtension;                                              //@synthesize rightHitTestExtension=_rightHitTestExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_allVisibleCells;
-(BOOL)_pointLiesWithinEffectiveTableBounds:(CGPoint)arg1 ;
-(id)_visibleCellClosestToPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(id)_preferredTable;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 tableFrame:(CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(CATransform3D)arg6 ;
-(void)_setTextColor:(id)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)cellForRowAtIndexPath:(id)arg1 ;
-(long long)selectionBarRow;
-(void)clearDataSourceAndDelegate;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(CGRect)_tableFrame;
-(void)setLeftHitTestExtension:(double)arg1 ;
-(void)setRightHitTestExtension:(double)arg1 ;
-(double)rowHeight;
-(void)setSelectionBarRect:(CGRect)arg1 ;
-(BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(NSRange)_visibleGlobalRows;
-(BOOL)_containsTable:(id)arg1 ;
-(BOOL)isRowChecked:(long long)arg1 ;
-(UIColor *)_textColor;
-(void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3 ;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1 ;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
-(BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)selectionBarRect;
-(id)_createContainerViewWithFrame:(CGRect)arg1 ;
-(id)_createTableViewWithFrame:(CGRect)arg1 containingFrame:(CGRect)arg2 ;
-(void)_centerTableInContainer:(id)arg1 ;
-(double)_horizontalBiasForEndTables;
-(CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1 ;
-(CATransform3D)_transformForTableWithTranslationX:(double)arg1 ;
-(void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(CGPoint)arg2 ;
-(CATransform3D)perspectiveTransform;
-(void)setPerspectiveTransform:(CATransform3D)arg1 ;
-(double)leftHitTestExtension;
-(double)rightHitTestExtension;
@end

