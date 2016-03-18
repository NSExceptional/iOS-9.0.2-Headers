/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject {

	BOOL _updated;
	BOOL _childrenUpdated;
	BOOL _subtreeUpdated;
	IKDOMNode* _ownerJSNode;
	NSMutableDictionary* _featuresMap;

}

@property (assign,nonatomic,__weak) IKDOMNode * ownerJSNode;                             //@synthesize ownerJSNode=_ownerJSNode - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                              //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isChildrenUpdated,nonatomic) BOOL childrenUpdated;              //@synthesize childrenUpdated=_childrenUpdated - In the implementation block
@property (assign,getter=isSubtreeUpdated,nonatomic) BOOL subtreeUpdated;                //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * featuresMap;                          //@synthesize featuresMap=_featuresMap - In the implementation block
+(id)jsNodeDataForNode:(xmlNode*)arg1 create:(BOOL)arg2 ;
-(void)setUpdated:(BOOL)arg1 ;
-(void)setSubtreeUpdated:(BOOL)arg1 ;
-(BOOL)isSubtreeUpdated;
-(BOOL)isChildrenUpdated;
-(void)setChildrenUpdated:(BOOL)arg1 ;
-(IKDOMNode *)ownerJSNode;
-(NSMutableDictionary *)featuresMap;
-(void)setFeaturesMap:(NSMutableDictionary *)arg1 ;
-(void)setFeature:(id)arg1 forName:(id)arg2 ;
-(id)featureForName:(id)arg1 ;
-(void)setOwnerJSNode:(IKDOMNode *)arg1 ;
-(BOOL)isUpdated;
@end

