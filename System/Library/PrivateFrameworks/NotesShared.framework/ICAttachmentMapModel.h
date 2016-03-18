/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class MKMapSnapshotter;

@interface ICAttachmentMapModel : ICAttachmentModel {

	MKMapSnapshotter* _mapSnapshotter;

}

@property (retain) MKMapSnapshotter * mapSnapshotter;              //@synthesize mapSnapshotter=_mapSnapshotter - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)needToGeneratePreviews;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(BOOL)generateAsynchronousPreviews;
-(void)generatePreviews;
-(void)setMapSnapshotter:(MKMapSnapshotter *)arg1 ;
-(MKMapSnapshotter *)mapSnapshotter;
@end

