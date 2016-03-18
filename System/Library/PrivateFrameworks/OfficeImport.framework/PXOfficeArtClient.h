/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@class PXPresentationState;

@interface PXOfficeArtClient : OAXClient {

	PXPresentationState* mPresentationState;

}
+(int)readPlaceholderTypeFromNode:(xmlNode*)arg1 ;
+(int)readPlaceholderBoundsTrackFromNode:(xmlNode*)arg1 ;
-(void)readClientDataFromPictureNode:(xmlNode*)arg1 toImage:(id)arg2 state:(id)arg3 ;
-(void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3 ;
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;
-(void)readBlipExtWithURI:(id)arg1 fromNode:(xmlNode*)arg2 toDrawable:(id)arg3 state:(id)arg4 ;
-(id)readOle:(xmlNode*)arg1 state:(id)arg2 ;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(id)readClientTextField:(xmlNode*)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4 ;
-(void)readClientDataFromShapeNode:(xmlNode*)arg1 toShape:(id)arg2 state:(id)arg3 ;
-(id)initWithState:(id)arg1 ;
-(id)presentationState;
@end

