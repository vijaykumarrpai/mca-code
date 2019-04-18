import React, { Component}from "react";
// react components used to create a google map
import {
  withScriptjs,
  withGoogleMap,
  GoogleMap,
  Marker,
  InfoWindow
} from "react-google-maps";
import { compose, withStateHandlers, withProps } from "recompose";

const MapWithAMarker = compose(withScriptjs, withGoogleMap)(props => {

  return (
    <GoogleMap defaultZoom={8} defaultCenter={{ lat: 29.5, lng: -95 }}>
      {props.markers.map(marker => {
        const onClick = props.onClick.bind(this, marker)
        return (
          <Marker
            key={marker.id}
            onClick={onClick}
            position={{ lat: marker.latitude, lng: marker.longitude }}
          >
            {props.selectedMarker === marker &&
              <InfoWindow>
                <div>
                  {marker.shelter}
                </div>
              </InfoWindow>}
            }
          </Marker>
        )
      })}
    </GoogleMap>
  )
})

export default class ShelterMap extends Component {
  constructor(props) {
    super(props)
    this.state = {
      shelters: [],
      selectedMarker: false
    }
  }
  componentDidMount() {
    fetch("https://api.harveyneeds.org/api/v1/shelters?limit=20")
      .then(r => r.json())
      .then(data => {
        this.setState({ shelters: data.shelters })
      })
  }
  handleClick = (marker, event) => {
    // console.log({ marker })
    this.setState({ selectedMarker: marker })
}
  render() {
    return (
      <div id="map-canvas">
        <MapWithAMarker
        selectedMarker={this.state.selectedMarker}
        markers={this.state.shelters}
        onClick={this.handleClick}
        //AIzaSyD3ZGb2n5GsH3H9RC0sO4tqPoUbfHaAPLU
        googleMapURL="https://maps.googleapis.com/maps/api/js?v=3.exp&key=AIzaSyBQZzREkSH7F2P2-m8mSXW7vb3FC1PeCZw&libraries=geometry,drawing,places"
        loadingElement={<div style={{ height: `100%` }} />}
        containerElement={<div style={{ height: `400px` }} />}
        mapElement={<div style={{ height: `100%` }} />}
      />

      <h3>Route Optimized Path for all delivery location</h3>
      <div>
        <table>
        <tr>
            <td colspan="2"><b>Configuration</b></td>
        </tr>
        <tr>
            <td>Travel Mode: </td>
            <td>
                <select id="travel-type">
                    <option value="DRIVING">Car</option>
                    <option value="BICYCLING">Bicycle</option>
                    {/* <option value="WALKING">Walking</option> */}
                </select>
            </td>
        </tr>
        <tr>
            <td>Avoid Highways: </td>
            <td>
                <select id="avoid-highways">
                    <option value="1">Enabled</option>
                    <option value="0" selected="selected">Disabled</option>
                </select>
            </td>
        </tr>
        <tr>
            <td>Max Generations: </td>
            <td>
                <select id="generations">
                    <option value="20">20</option>
                    <option value="50" selected="selected">50</option>
                    <option value="100">100</option>
                </select>
            </td>
        </tr>
        <tr>

        </tr>
        <tr>
            <td colspan="2"><b>Debug Info</b></td>
        </tr>
        <tr>
            <td>Destinations Count: </td>
            <td id="destinations-count">0</td>
        </tr>
        <tr>
            <td>Generations: </td><td id="generations-passed">0</td>
        </tr>
        <tr>
            <td>Best Time: </td><td id="best-time">?</td>
        </tr>
        <tr id="ga-buttons">
            <td colspan="2"><button id="find-route">Start</button> <button id="clear-map">Clear</button></td>
        </tr>
        </table>
      </div>

      </div>
      
    )
  }
}

