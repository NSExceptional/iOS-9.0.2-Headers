/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, MKAnnotationManager, UICalloutView, UIView, NSString, UIImage, VKAnchorWrapper;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {

	BOOL _customTransformApplied;
	BOOL _internalTransformApplied;
	BOOL _animatingToCoordinate;
	BOOL _tracking;
	SCD_Struct_MK1 _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	SCD_Struct_MK1 _coordinate;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	double _mapRotationRadians;
	BOOL _explicitlyHidden;
	BOOL _hiddenForOffscreen;
	BOOL _hiddenForInvalidPoint;
	double _mapPitchRadians;
	SCD_Struct_MK14 _mapDisplayStyle;
	MKAnnotationManager* _annotationManager;
	id<MKAnnotation> _annotation;
	UICalloutView* _calloutView;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	UIView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	UIImage* _image;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	unsigned long long _dragState;
	/*^block*/id _calloutHitTest;
	struct {
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
	}  _flags;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;

}

@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL canShowCallout; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView;                                                                          //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightCalloutAccessoryView;                                                                         //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * detailCalloutAccessoryView;                                                                        //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (assign,setter=_setPresentationCoordinate:,nonatomic) SCD_Struct_MK1 _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                  //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                  //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) BOOL _animatingToCoordinate;              //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) BOOL _tracking;                                                     //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) SCD_Struct_MK14 mapDisplayStyle;                        //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                  //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                 //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                        //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                 //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (nonatomic,copy) id _calloutHitTest;                                                                                           //@synthesize calloutHitTest=_calloutHitTest - In the implementation block
@property (assign,setter=_setAnnotationManager:,nonatomic,__weak) MKAnnotationManager * _annotationManager;                              //@synthesize annotationManager=_annotationManager - In the implementation block
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (assign,setter=_setHiddenForInvalidPoint:,getter=_isHiddenForInvalidPoint,nonatomic) BOOL hiddenForInvalidPoint;               //@synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint - In the implementation block
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                         //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
+(id)currentLocationTitle;
+(unsigned long long)_selectedZIndex;
+(id)_disclosureCalloutButton;
+(unsigned long long)_zIndex;
+(id)droppedPinTitle;
+(BOOL)_followsTerrain;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)_mapType;
-(void)_setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(SCD_Struct_MK14)_mapDisplayStyle;
-(id)_annotationContainer;
-(MKAnnotationManager *)_annotationManager;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)detailCalloutAccessoryView;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(UIView *)leftCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)rightCalloutAccessoryView;
-(id)_calloutView;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_draggingDropOffset;
-(void)_didUpdatePosition;
-(CGRect)_significantBounds;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(double)_pointsForDistance:(double)arg1 ;
-(GEORouteMatch *)_routeMatch;
-(void)_updateFromMap;
-(void)_userTrackingModeDidChange:(id)arg1 ;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(BOOL)_hasAlternateOrientation;
-(BOOL)isDraggable;
-(id)_vkMarker;
-(BOOL)_canChangeOrientation;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(CGPoint)rightCalloutOffset;
-(void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3 ;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_invalidateCachedCoordinate;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)set_calloutHitTest:(id)arg1 ;
-(CGRect)_significantFrame;
-(void)_resetZIndexNotify:(BOOL)arg1 ;
-(void)_setHiddenForInvalidPoint:(BOOL)arg1 ;
-(void)_resetZIndex;
-(id)_calloutHitTest;
-(CGPoint)leftCalloutOffset;
-(unsigned long long)_zIndex;
-(CGRect)_mapkit_visibleRect;
-(void)_setCalloutView:(id)arg1 ;
-(void)_removePopover;
-(BOOL)_isAnimatingToCoordinate;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)_setPresentationCourse:(double)arg1 ;
-(BOOL)_isTracking;
-(BOOL)_isHiddenForInvalidPoint;
-(CGPoint)calloutOffset;
-(id)_presentationCoordinateChangedCallback;
-(BOOL)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1 ;
-(double)_presentationCourse;
-(unsigned long long)_orientationCount;
-(void)_setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)_setZIndex:(unsigned long long)arg1 notify:(BOOL)arg2 ;
-(void)_setAnnotationManager:(id)arg1 ;
-(void)_setMapPitchRadians:(double)arg1 ;
-(id)_getPopover:(id)arg1 ;
-(SCD_Struct_MK1)_presentationCoordinate;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(BOOL)_canDisplayDisclosureInCallout;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(BOOL)canShowCallout;
-(void)_setCanDisplayDisclosureInCallout:(BOOL)arg1 ;
-(double)_mapPitchRadians;
-(unsigned long long)dragState;
-(id)_contentLayer;
-(double)_mapRotationRadians;
-(void)_setRouteMatch:(id)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDraggable:(BOOL)arg1 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(NSString *)reuseIdentifier;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)_containerView;
-(BOOL)isPersistent;
-(VKAnchorWrapper *)anchor;
-(CGPoint)centerOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
@end

