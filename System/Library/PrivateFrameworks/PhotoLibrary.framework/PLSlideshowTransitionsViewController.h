/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UITableView, NSMutableArray, NSArray, NSString;

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _containerView;
	UITableView* _table;
	NSMutableArray* _tableCells;
	NSArray* _transitionKeys;
	NSArray* _alternateLocalizations;
	NSString* _selectedTransition;

}

@property (nonatomic,retain) NSString * selectedTransition; 
@property (nonatomic,retain) NSArray * alternateLocalizations;              //@synthesize alternateLocalizations=_alternateLocalizations - In the implementation block
@property (nonatomic,retain) NSArray * transitionKeys;                      //@synthesize transitionKeys=_transitionKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidUnload;
-(void)setSelectedTransition:(NSString *)arg1 ;
-(NSString *)selectedTransition;
-(void)setTransitionKeys:(id)arg1 alternateLocalizations:(id)arg2 ;
-(id)initWithTransitions:(id)arg1 alternateTransitionLocalizations:(id)arg2 ;
-(void)setTransitionKeys:(NSArray *)arg1 ;
-(void)setAlternateLocalizations:(NSArray *)arg1 ;
-(void)_configureTableCells;
-(NSArray *)transitionKeys;
-(NSArray *)alternateLocalizations;
@end

