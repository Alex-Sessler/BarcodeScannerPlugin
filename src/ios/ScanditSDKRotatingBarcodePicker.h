//
//  Copyright 2010 Mirasense AG
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//
//  ScanditSDKRotatingBarcodePicker is a utility class in the demo that shows how to make the
//  ScanditSDKBarcodePicker properly change its orientation when the device is rotated by the
//  user. This class is not required when the Scandit SDK is used in portrait mode only. 
//


#import <UIKit/UIKit.h>

#import <ScanditBarcodeScanner/ScanditBarcodeScanner.h>

#import "ScanditSDKSearchBar.h"
#import "SBSConstraints.h"


@protocol ScanditSDKSearchBarDelegate <NSObject>
- (void)searchExecutedWithContent:(NSString *)content;
@end


@interface ScanditSDKRotatingBarcodePicker : SBSBarcodePicker

@property (nonatomic, strong) SBSConstraints *portraitConstraints;
@property (nonatomic, strong) SBSConstraints *landscapeConstraints;
@property (nonatomic, weak) id<ScanditSDKSearchBarDelegate> searchDelegate;
@property (nonatomic, strong, readonly) ScanditSDKSearchBar *manualSearchBar;

- (instancetype)initWithSettings:(SBSScanSettings *)settings;

- (void)adjustSize:(CGFloat)animationDuration;

- (void)showSearchBar:(BOOL)show;

@end
