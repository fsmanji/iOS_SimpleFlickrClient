//
//  JustifiedViewController.h
//  FlickrDemo
//
//  Created by Cristan Zhang on 9/22/15.
//  Copyright (c) 2015 FastTrack. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, JustifiedType) {
    kStrictSpacing,
    kLeftAligned,
    kStretchSpaces,
    kFreeSized
};

@interface JustifiedViewController : UIViewController

@property(nonatomic, strong) NSMutableDictionary *searchResults;
@property(nonatomic, strong) NSMutableArray *searches;

@property JustifiedType layoutType;

@end
