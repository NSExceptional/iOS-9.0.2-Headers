/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MFDraggableItem, MFDragDestination;
@class NSMutableArray, NSMutableDictionary, UIView, UIGestureRecognizer, UIWindow, MFGobblerGestureRecognizer, NSTimer, NSString;

@interface MFDragManager : NSObject <UIGestureRecognizerDelegate> {

	NSMutableArray* _dragContextValues;
	NSMutableArray* _dragDestinations;
	NSMutableArray* _dragSources;
	NSMutableDictionary* _gestureRecognizersForSource;
	NSMutableDictionary* _sourceForGestureRecognizer;
	id<MFDraggableItem> _draggedItem;
	UIView* _draggedItemView;
	id<MFDragDestination> _currentDestination;
	UIGestureRecognizer* _currentGestureBeingProcessed;
	UIWindow* _dragWindow;
	MFGobblerGestureRecognizer* _gobblerGestureRecognizer;
	NSTimer* _scrollTimer;
	CGPoint _offsetCenterOfDraggedView;
	CGPoint _previousGestureLocation;
	double _timeOfLastBigUpdate;
	CGRect _draggedItemOriginalFrame;
	BOOL _dragWasSuccessful;
	BOOL _scrollingForDrag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addDragContext:(id)arg1 ;
-(void)removeDragContext:(id)arg1 ;
-(void)enumerateDragContextsUsingBlock:(/*^block*/id)arg1 ;
-(void)_processGestureUpdate;
-(void)_cleanUpAfterDragCompleted;
-(void)_scrollViewIfNecessary;
-(void)addDragDestination:(id)arg1 ;
-(void)removeDragDestination:(id)arg1 ;
-(void)addDragSource:(id)arg1 ;
-(void)removeDragSource:(id)arg1 ;
-(void)cancelCurrentDragOperation;
-(void)_handleLongPress:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
@end

