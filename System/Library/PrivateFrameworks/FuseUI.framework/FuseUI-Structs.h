/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned didUpdateBounds : 1;
} SCD_Struct_Mu2;

typedef struct {
	unsigned didSelectAddButton : 1;
	unsigned didSelectContextualActionsButton : 1;
	unsigned didSelectPlayButton : 1;
	unsigned didLayoutSubviews : 1;
	unsigned shouldLayoutAsEditing : 1;
} SCD_Struct_Mu3;

typedef struct {
	unsigned didLayoutSubviews : 1;
	unsigned contentSizeDidChange : 1;
} SCD_Struct_Mu4;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > {
	_NSRange __first_;
} compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> > {
	_NSRange __begin_;
	_NSRange __end_;
	compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > __end_cap_;
} vector<_NSRange, std::__1::allocator<_NSRange> >;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	long long field1;
	unsigned long long field2;
} SCD_Struct_Mu12;

typedef struct {
	long long field1;
	long long field2;
	double field3;
} SCD_Struct_Mu13;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned didSelectContextualActionsButton : 1;
	unsigned didSelectPlayButton : 1;
	unsigned shouldLayoutAsEditing : 1;
} SCD_Struct_Mu15;

typedef struct _compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > {
	shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > __first_;
} compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > >;

typedef struct vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > {
	shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > __begin_;
	shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > __end_;
	compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > __end_cap_;
} vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > >;

typedef struct {
	unsigned didSelectAddSongsButton : 1;
	unsigned didUpdateProductDescription : 1;
	unsigned didUpdatePublicSwitchState : 1;
	unsigned didUpdateVisibleSwitchState : 1;
	unsigned didFinishContentHeightAnimation : 1;
	unsigned willBeginContentHeightAnimation : 1;
	unsigned shouldDeferContentHeightAnimationUpdates : 1;
} SCD_Struct_Mu18;

